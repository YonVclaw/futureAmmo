#include "script_component.hpp"
/*
 * Author: YonV
 * Mk387 DESIG — deployable designator that lases the nearest enemy for guided/loitering munitions.
 *
 * Arguments:
 * 0: Firer <OBJECT>
 * 1: Impact position <ARRAY>
 * 2: Lifetime in seconds <NUMBER>
 * 3: Search radius in metres <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params [
    ["_unit",   objNull, [objNull]],
    ["_pos",    [0,0,0], [[]]],
    ["_life",   120,     [0]],
    ["_radius", 400,     [0]]
];
private _side  = side group _unit;
private _ltCls = ["LaserTargetW", "LaserTargetE"] select (_side == east);
private _post  = createVehicle ["Land_Laserdesignator_01_back_F", _pos, [], 0, "CAN_COLLIDE"];

[{
    params ["_args", "_h"];
    _args params ["_post", "_side", "_radius", "_ltCls", "_end"];
    private _lt = _post getVariable ["lt", objNull];
    if (isNull _post || {time > _end}) exitWith {
        if (!isNull _lt) then { deleteVehicle _lt };
        if (!isNull _post) then { deleteVehicle _post };
        _h call CBA_fnc_removePerFrameHandler;
    };
    private _tgts = [getPos _post, _radius, _side] call FUNC(enemiesNear);
    if (_tgts isEqualTo []) exitWith {
        if (!isNull _lt) then { deleteVehicle _lt; _post setVariable ["lt", objNull] };
    };
    _tgts = [_tgts, [], { getPos _post distance _x }, "ASCEND"] call BIS_fnc_sortBy;
    private _tgt = _tgts # 0;
    if (isNull _lt) then {
        _lt = createVehicle [_ltCls, getPosATL _tgt, [], 0, "CAN_COLLIDE"];
        _post setVariable ["lt", _lt];
    };
    _lt setPosATL (getPosATL _tgt vectorAdd [0,0,1]);
}, 0.5, [_post, _side, _radius, _ltCls, time + _life]] call CBA_fnc_addPerFrameHandler;

[_unit, "<t color='#ff5555'>Designator lasing</t>"] call FUNC(notify);
