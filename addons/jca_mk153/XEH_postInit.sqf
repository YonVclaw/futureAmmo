#include "script_component.hpp"
/*
 * Author: Ghosts of Battle
 * Registers the Mk153 SMAW C-UAS / airburst rounds with the antidrone
 * component's proximity fuze. Runs after ghostfa_antidrone's postInit
 * (requiredAddons ordering), so the registry hashmap already exists. If the
 * antidrone component is absent the rounds fly as plain HE rockets.
 *
 * Public: No
 */

if (isNil QEGVAR(antidrone,AD_params)) exitWith {};

// [trigger radius (m), lethal radius (m), max damage, effective range (m)]
// Mk18 ADM — C-UAS proximity frag vs drones / loitering munitions.
EGVAR(antidrone,AD_params) set ["FA_R_smaw_Mk18_ADM", [12, 10, 0.85, 500]];

// Mk3 Mod 2 HEDP — programmable airburst only: trigger radius 0 disables the
// drone proximity check while the dialled burst range (shared Mk364 keybind /
// ACE self-menu) still detonates the round in flight.
EGVAR(antidrone,AD_params) set ["FA_R_smaw_Mk3Mod2_HEDP", [0, 8, 0.8, 500]];
EGVAR(antidrone,programmableAB) pushBackUnique "FA_R_smaw_Mk3Mod2_HEDP";
