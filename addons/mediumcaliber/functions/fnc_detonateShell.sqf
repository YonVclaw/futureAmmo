#include "script_component.hpp"
/*
 * Author: YonV
 * Applies proximity-burst effect and distance-scaled damage to all UAVs and
 * infantry within the lethal radius (drones for counter-UAS, infantry for
 * defilade defeat). Routes damage via remoteExec for non-local targets.
 * Generalized from the anti-drone module's fnc_detonateAD.sqf.
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 * 1: Lethal radius in metres <NUMBER>
 * 2: Maximum damage at point blank (1.0 = guaranteed kill) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [
    ["_proj",   objNull, [objNull]],
    ["_lethal", 7,       [0]],
    ["_dmg",    0.6,     [0]]
];

private _bpos = getPosVisual _proj;
"SmallSecondary" createVehicle _bpos;

{
    private _f = 1 - ((_x distance _proj) / _lethal);
    if (_f > 0) then {
        private _newDmg = (damage _x) + (_f * _dmg);
        if (local _x) then {
            _x setDamage _newDmg;
        } else {
            [_x, _newDmg] remoteExec ["setDamage", _x];
        };
    };
} forEach ((_proj nearEntities [["Air", "UAV", "CAManBase"], _lethal]) select {
    unitIsUAV _x || {_x isKindOf "CAManBase"}
});

deleteVehicle _proj;
