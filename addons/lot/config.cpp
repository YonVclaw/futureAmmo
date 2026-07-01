#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostfa_main",
            "ghostfa_ammo",
            "lot_aaf_m1014",
            "cba_main"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
        ammo[] = {};
        magazines[] = {
            "FA_6Rnd_12G_Mk350_TBS",
            "FA_8Rnd_12G_Mk350_TBS",
            "FA_6Rnd_12G_Mk351_FLE",
            "FA_8Rnd_12G_Mk351_FLE",
            "FA_6Rnd_12G_Mk352_APS",
            "FA_8Rnd_12G_Mk352_APS",
            "FA_6Rnd_12G_Mk353_BRC",
            "FA_8Rnd_12G_Mk353_BRC",
            "FA_6Rnd_12G_Mk360_AD",
            "FA_8Rnd_12G_Mk360_AD",
            "FA_6Rnd_12G_Mk363_PABS",
            "FA_8Rnd_12G_Mk363_PABS"
        };
    };
};

#include "CfgMagazines.hpp"
#include "CfgMagazinewells.hpp"
