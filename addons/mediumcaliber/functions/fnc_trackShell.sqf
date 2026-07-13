#include "script_component.hpp"
/*
 * Author: YonV
 * Installs a per-frame proximity check for a programmable-airburst shell.
 * Detonates when a UAV or soft ground target enters the proximity radius.
 * Self-removes on round expiry, detonation, or once the round has flown past
 * its effective range (mirrors fnc_trackAD.sqf from the anti-drone module).
 *
 * Applies the faction performance gradient (GVAR(greenFraction)/GVAR(redFraction),
 * gated by GVAR(factionScaling)) and the counter-UAS effectiveness ceiling
 * (GVAR(cuasCeiling)) to the trigger/lethal radius and max damage, based on the
 * firing vehicle's side. Effective range is a physical property of the shell's
 * flight and is not scaled by either setting.
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 * 1: Ammo class name <STRING>
 * 2: Firing unit/vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [
    ["_proj", objNull, [objNull]],
    ["_ammo", "",      [""]],
    ["_firer", objNull, [objNull]]
];

(GVAR(params) getOrDefault [_ammo, [10, 7, 0.6, 2000]]) params ["_prox", "_lethal", "_dmg", "_range"];

private _fraction = 1;
if (GVAR(factionScaling)) then {
    _fraction = switch (side _firer) do {
        case west: { 1 };
        case independent: { GVAR(greenFraction) };
        case east: { GVAR(redFraction) };
        default { 1 };
    };
};

_prox = _prox * _fraction * GVAR(cuasCeiling);
_lethal = _lethal * _fraction * GVAR(cuasCeiling);
_dmg = (_dmg * _fraction * GVAR(cuasCeiling)) min 1;

private _origin = getPosASL _proj;

[{
    params ["_args", "_h"];
    _args params ["_proj", "_prox", "_lethal", "_dmg", "_origin", "_range"];

    if (isNull _proj) exitWith {
        _h call CBA_fnc_removePerFrameHandler;
    };

    if ((_origin distance (getPosASL _proj)) > _range) exitWith {
        _h call CBA_fnc_removePerFrameHandler;
    };

    private _targets = (_proj nearEntities [["Air", "UAV", "CAManBase"], _prox]) select {
        unitIsUAV _x || {_x isKindOf "CAManBase"}
    };
    if (_targets isNotEqualTo []) exitWith {
        [_proj, _lethal, _dmg] call FUNC(detonateShell);
        _h call CBA_fnc_removePerFrameHandler;
    };
}, 0, [_proj, _prox, _lethal, _dmg, _origin, _range]] call CBA_fnc_addPerFrameHandler;
