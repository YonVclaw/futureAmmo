#include "script_component.hpp"
/*
 * Registers the 6.2x40 DBJ-25 PAB round with the antidrone component's
 * proximity fuze, making the Katiba a light counter-UAS shooter. Runs after
 * ghostfa_antidrone's postInit. Flies as a plain caseless round if the
 * antidrone component is absent. Tracer variants share the base ammo's fuze.
 *
 * Public: No
 */

if (isNil QEGVAR(antidrone,AD_params)) exitWith {};

// [trigger radius (m), lethal radius (m), max damage, effective range (m)]
private _pab = [4, 3, 0.5, 1200];
{
    EGVAR(antidrone,AD_params) set [_x, _pab];
} forEach [
    "FA_o_ammo_62_DBJ25_PAB",
    "FA_o_ammo_62_DBJ25_PAB_T_Red",
    "FA_o_ammo_62_DBJ25_PAB_T_Yellow",
    "FA_o_ammo_62_DBJ25_PAB_T_Green",
    "FA_o_ammo_62_DBJ25_PAB_T_White",
    "FA_o_ammo_62_DBJ25_PAB_T_Blue",
    "FA_o_ammo_62_DBJ25_PAB_T_Orange",
    "FA_o_ammo_62_DBJ25_PAB_T_IR"
];
