#include "script_component.hpp"
/*
 * Registers the 12.7x108 7N42 HEAB round with the antidrone component's
 * proximity fuze. Runs after ghostfa_antidrone's postInit (requiredAddons
 * ordering). Flies as a plain ball round if the antidrone component is absent.
 *
 * Public: No
 */

if (isNil QEGVAR(antidrone,AD_params)) exitWith {};

// [trigger radius (m), lethal radius (m), max damage, effective range (m)]
EGVAR(antidrone,AD_params) set ["FA_127x108_7N42", [6, 5, 0.6, 1500]];
