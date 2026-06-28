#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "futureAmmo_antidrone",
            "EF_Main",
            "EF_Addons"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
        magazines[] = {
            // EF 6.5 30Rnd Coyote — Mk367 PAB
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_Mk367_T_Red",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_Mk367_T_Yellow",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_Mk367_T_Green",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_Mk367_T_White",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_Mk367_T_Blue",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_Mk367_T_Orange",
            // EF 6.5 100Rnd Coyote — Mk367 PAB
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_Mk367_T_Red",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_Mk367_T_Yellow",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_Mk367_T_Green",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_Mk367_T_White",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_Mk367_T_Blue",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_Mk367_T_Orange"
        };
    };
};

#include "CfgMagazines.hpp"
