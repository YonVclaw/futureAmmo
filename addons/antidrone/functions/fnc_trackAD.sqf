#include "script_component.hpp"
/*
 * Author: YonV
 * Installs a per-frame proximity check for a PAB projectile. Detonates when
 * a UAV enters the proximity radius. Self-removes on round expiry, detonation,
 * or once the round has flown past its caliber's effective range (the
 * proximity fuze disarms past that point, same as it would with a real
 * anti-aircraft proximity fuze's limited engagement window).
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 * 1: Ammo class name <STRING>
 * 2: Firer <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [
    ["_proj", objNull, [objNull]],
    ["_ammo", "",      [""]],
    ["_unit", objNull, [objNull]]
];

(GVAR(AD_params) getOrDefault [_ammo, [4, 3, 0.5, 500]]) params ["_prox", "_lethal", "_dmg", "_range"];
_prox = _prox * GVAR(triggerRadiusMultiplier);
_lethal = _lethal * GVAR(lethalRadiusMultiplier);
_dmg = _dmg * GVAR(damageMultiplier);

// Programmable-airburst rounds (GVAR(programmableAB)): if the firer dialled a
// slant range (ACE self-menu / CBA keybind), the round bursts at that distance
// from the muzzle even with no drone present. 0 = off (pure proximity + HE on
// impact). Clamped to the caliber's effective range so it can never out-reach
// the fuze window.
private _burst = 0;
if (_ammo in GVAR(programmableAB) && {!isNull _unit}) then {
    _burst = (_unit getVariable [QGVAR(burstRange), 0]) max 0 min _range;
};

private _origin = getPosASL _proj;

[{
    params ["_args", "_h"];
    _args params ["_proj", "_prox", "_lethal", "_dmg", "_origin", "_range", "_burst"];

    if (isNull _proj) exitWith {
        _h call CBA_fnc_removePerFrameHandler;
    };

    private _travelled = _origin distance (getPosASL _proj);

    // Programmed airburst: detonate at the dialled slant range, drone or not.
    if (_burst > 0 && {_travelled >= _burst}) exitWith {
        [_proj, _lethal, _dmg] call FUNC(detonateAD);
        _h call CBA_fnc_removePerFrameHandler;
    };

    if (_travelled > _range) exitWith {
        _h call CBA_fnc_removePerFrameHandler;
    };

    private _drones = (_proj nearEntities [["Air", "UAV"], _prox]) select { unitIsUAV _x };
    if (_drones isNotEqualTo []) exitWith {
        [_proj, _lethal, _dmg] call FUNC(detonateAD);
        _h call CBA_fnc_removePerFrameHandler;
    };
}, 0, [_proj, _prox, _lethal, _dmg, _origin, _range, _burst]] call CBA_fnc_addPerFrameHandler;
