#include "script_component.hpp"
/*
 * Author: YonV
 * Mk381 SPARCS-II — descending recon camera that auto-marks enemy contacts for its lifetime.
 *
 * Arguments:
 * 0: Firer <OBJECT>
 * 1: Deploy position (apex) <ARRAY>
 * 2: Lifetime in seconds <NUMBER>
 * 3: Detection radius in metres <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params [
    ["_unit",   objNull, [objNull]],
    ["_pos",    [0,0,0], [[]]],
    ["_life",   60,      [0]],
    ["_radius", 400,     [0]]
];
private _side = side group _unit;
private _cap  = createVehicle ["Land_Camera_01_F", _pos, [], 0, "CAN_COLLIDE"];
_cap allowDamage false;
private _chute = createVehicle ["B_Parachute_02_F", _pos, [], 0, "CAN_COLLIDE"];
_chute attachTo [_cap, [0,0,2.2]];

[_unit, "<t color='#88ff88'>SPARCS-II deployed</t><br/>Marking contacts"] call FUNC(notify);

[{
    params ["_args", "_h"];
    _args params ["_cap", "_chute", "_side", "_radius", "_end"];
    if (isNull _cap || {time > _end}) exitWith {
        if (!isNull _cap) then {
            { deleteMarker _x } forEach (_cap getVariable ["mk", []]);
            deleteVehicle _cap;
        };
        if (!isNull _chute) then { deleteVehicle _chute };
        _h call CBA_fnc_removePerFrameHandler;
    };
    private _p = getPosATL _cap;
    if (_p # 2 > 0.4) then { _cap setPosATL [_p # 0, _p # 1, (_p # 2) - 0.35] };
    { deleteMarker _x } forEach (_cap getVariable ["mk", []]);
    private _mk = [];
    {
        private _m = createMarker [format ["sparcs_%1", netId _x], getPosVisual _x];
        _m setMarkerType "o_inf"; _m setMarkerColor "ColorRed"; _m setMarkerSize [0.7, 0.7];
        _mk pushBack _m;
    } forEach ([getPosVisual _cap, _radius, _side] call FUNC(enemiesNear));
    _cap setVariable ["mk", _mk];
}, 0.5, [_cap, _chute, _side, _radius, time + _life]] call CBA_fnc_addPerFrameHandler;
