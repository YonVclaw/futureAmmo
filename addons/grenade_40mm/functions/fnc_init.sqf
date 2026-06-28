#include "script_component.hpp"
/*
 * Author: YonV
 * Builds the Mk380 support registry and installs the CBA fired event handler.
 * Safe to call multiple times; exits immediately if already initialised.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */
if (GVAR(initDone)) exitWith {};
GVAR(initDone) = true;

GVAR(hasACRE) = isClass (configFile >> "CfgPatches" >> "acre_main");
GVAR(hasTFAR) = isClass (configFile >> "CfgPatches" >> "tfar_core") ||
                {isClass (configFile >> "CfgPatches" >> "task_force_radio")};
GVAR(hasDEW)  = isClass (configFile >> "CfgPatches" >> "DEW_main") ||
                {isClass (configFile >> "CfgPatches" >> "Drongo_EW")};

GVAR(relays) = [];

// Registry: ammo class -> [deploy mode, effect function, lifetime (s), radius (m)]
GVAR(registry) = createHashMapFromArray [
    ["futureAmmo_40mm_Mk380_NRP",    ["LAND", FUNC(relay),   1800, 5000]],
    ["futureAmmo_40mm_Mk381_SPARCS", ["APEX", FUNC(sparcs),    60,  400]],
    ["futureAmmo_40mm_Mk382_GLUAS",  ["APEX", FUNC(gluas),   1800,  600]],
    ["futureAmmo_40mm_Mk383_EMP",    ["LAND", FUNC(emp),        8,   60]],
    ["futureAmmo_40mm_Mk384_MSmoke", ["LAND", FUNC(msmoke),    60,   25]],
    ["futureAmmo_40mm_Mk385_Decoy",  ["LAND", FUNC(decoy),    120,  300]],
    ["futureAmmo_40mm_Mk386_UGS",    ["LAND", FUNC(ugs),     1800,  150]],
    ["futureAmmo_40mm_Mk387_Desig",  ["LAND", FUNC(desig),    120,  400]],
    ["futureAmmo_40mm_Mk388_Jammer", ["LAND", FUNC(jammer),   900,  400]]
];

["CAManBase", "fired", {
    params ["_unit", "_w", "_m", "_md", "_ammo", "_mag", "_proj"];
    private _entry = GVAR(registry) getOrDefault [_ammo, []];
    if (_entry isEqualTo []) exitWith {};
    [_unit, _proj, _entry] call FUNC(handle);
}] call CBA_fnc_addClassEventHandler;
