#include "script_component.hpp"
/*
 * Author: YonV
 * Installs a per-frame proximity check for a PAB projectile. Detonates when
 * a UAV enters the proximity radius. Self-removes on round expiry or detonation.
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 * 1: Ammo class name <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [
    ["_proj", objNull, [objNull]],
    ["_ammo", "",      [""]]
];

(GVAR(AD_params) getOrDefault [_ammo, [8, 6, 1.0]]) params ["_prox", "_lethal", "_dmg"];

[{
    params ["_args", "_h"];
    _args params ["_proj", "_prox", "_lethal", "_dmg"];

    if (isNull _proj) exitWith {
        _h call CBA_fnc_removePerFrameHandler;
    };

    private _drones = (_proj nearEntities [["Air", "UAV"], _prox]) select { unitIsUAV _x };
    if (_drones isNotEqualTo []) exitWith {
        [_proj, _lethal, _dmg] call FUNC(detonateAD);
        _h call CBA_fnc_removePerFrameHandler;
    };
}, 0, [_proj, _prox, _lethal, _dmg]] call CBA_fnc_addPerFrameHandler;
