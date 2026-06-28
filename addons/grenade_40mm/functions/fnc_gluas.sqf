#include "script_component.hpp"
/*
 * Author: YonV
 * Mk382 GLUAS-H — spawns a real loitering micro-UAV and hands the feed to the firer.
 *
 * Arguments:
 * 0: Firer <OBJECT>
 * 1: Deploy position (apex) <ARRAY>
 * 2: Lifetime in seconds <NUMBER>
 * 3: Loiter radius in metres <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params [
    ["_unit",   objNull, [objNull]],
    ["_pos",    [0,0,0], [[]]],
    ["_life",   1800,    [0]],
    ["_radius", 600,     [0]]
];
private _side = side group _unit;
private _alt  = 120;
private _sp   = [_pos # 0, _pos # 1, _alt];
private _uav  = createVehicle [[_side] call FUNC(uavClass), _sp, [], 0, "FLY"];
createVehicleCrew _uav;
_uav setPosATL _sp;
(group _uav) setSide _side;

if (local _unit) then {
    private _term = [_side] call FUNC(terminal);
    if !(_term in assignedItems _unit) then { _unit linkItem _term };
    _unit connectTerminalToUAV _uav;
};

_uav flyInHeight _alt;
private _wp = (group _uav) addWaypoint [_pos, 0];
_wp setWaypointType "LOITER";
_wp setWaypointLoiterRadius 60;
_wp setWaypointLoiterType "CIRCLE_L";
_wp setWaypointSpeed "LIMITED";

[_unit, "<t color='#88ff88'>GLUAS-H airborne</t><br/>Loitering ~30 min"] call FUNC(notify);
[{
    params ["_u"];
    if (!isNull _u) then {
        { deleteVehicle _x } forEach crew _u;
        deleteVehicle _u;
    };
}, [_uav], _life] call CBA_fnc_waitAndExecute;
