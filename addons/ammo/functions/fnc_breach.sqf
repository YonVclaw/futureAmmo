#include "..\script_component.hpp"
/*
 * Author: YonV (adapted from fn_lot_breach.sqf by Lotto)
 * Mk353 BRC door breach — looks 3 m ahead of the muzzle for a building,
 * finds the nearest door animation source, and forces it open.
 *
 * Honest caveat: Arma's door/lock system is inconsistent across building
 * types. When position can't be resolved the function opens all door
 * sources near the aim point as a fallback.
 *
 * Arguments:
 * 0: Firer <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params [["_unit", objNull, [objNull]]];
if (isNull _unit) exitWith {};

private _from = eyePos _unit;
private _dir  = _unit weaponDirection currentWeapon _unit;
private _aim  = _from vectorAdd (_dir vectorMultiply 3);

private _house = nearestObject [_aim, "House"];
if (isNull _house) then { _house = nearestBuilding _aim };
if (isNull _house || {_aim distance _house > 8}) exitWith {};

// HOOK: if a dedicated breaching mod is present, call it here and exit.

private _doors = ("true" configClasses (configOf _house >> "AnimationSources"))
    apply { configName _x }
    select {
        private _n = toLower _x;
        (["door", _n] call BIS_fnc_inString) &&
        {!(["sound", _n] call BIS_fnc_inString)} &&
        {!(["handle", _n] call BIS_fnc_inString)} &&
        {!(["lock", _n] call BIS_fnc_inString)}
    };
if (_doors isEqualTo []) exitWith {};

private _best  = "";
private _bestD = 1e9;
{
    private _p = _house selectionPosition [_x, "Memory"];
    if (_p isEqualTo [0,0,0]) then { _p = _house selectionPosition _x };
    if (_p isNotEqualTo [0,0,0]) then {
        private _d = (_house modelToWorld _p) distance _aim;
        if (_d < _bestD) then { _bestD = _d; _best = _x };
    };
} forEach _doors;

private _fnc_open = {
    params ["_h", "_door"];
    _h setVariable [format ["bis_disabled_%1", _door], 0, true];
    _h animateDoor [_door, 1];
};

if (_best != "") then {
    [_house, _best] call _fnc_open;
} else {
    { [_house, _x] call _fnc_open } forEach _doors;
};

if (local _unit && {hasInterface}) then {
    hint parseText "<t color='#ffcc55'>Breach — door forced</t>";
};
