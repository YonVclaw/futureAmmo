#include "script_component.hpp"
/*
 * Registers the 14.5x114 7N62 HEAB round with the antidrone component's
 * proximity fuze (makes the KPV a drone-killer). Runs after ghostfa_antidrone's
 * postInit. Flies as a plain ball round if the antidrone component is absent.
 *
 * Public: No
 */

if (isNil QEGVAR(antidrone,AD_params)) exitWith {};

// [trigger radius (m), lethal radius (m), max damage, effective range (m)]
EGVAR(antidrone,AD_params) set ["FA_ammo_145_7N62", [6, 5, 0.7, 2000]];
