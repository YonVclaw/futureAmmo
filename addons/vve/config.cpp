#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_ballistics",
            "ghostfa_main",
            "ghostfa_ammo",           // .50 vehicle belts
            "ghostfa_mediumcaliber",  // 30mm + 35mm natures
            "ghostfa_maincaliber",    // 105mm MGS rounds
            "ghostfa_missiles",       // Titan-rack SAMs + 1Rnd tube variants
            "vve_core",               // target vehicle weapons
            "cba_main"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
        // Pure wiring compat: appends existing FA magazines onto VVE weapons.
        // Defines no new magazines/ammo of its own.
        ammo[] = {};
        magazines[] = {};
    };
};

#include "CfgWeapons.hpp"
