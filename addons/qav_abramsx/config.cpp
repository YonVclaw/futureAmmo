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
            "ghostfa_ammo",           // .50 / .338 / 7.62 vehicle belts
            "ghostfa_mediumcaliber",  // 30mm natures
            "ghostfa_maincaliber",    // 120mm natures
            "QAV_AbramsX",            // target vehicle weapons
            "cba_main"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
        // Pure wiring compat: appends existing FA magazines onto QAV AbramsX
        // weapons. Defines no new magazines/ammo of its own.
        ammo[] = {};
        magazines[] = {};
    };
};

#include "CfgWeapons.hpp"
