#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "futureAmmo_ammo",
            "EF_Main",
            "EF_Addons"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
        magazines[] = {
            // EF 30Rnd coyote tracer variants
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Red",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Yellow",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Green",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_White",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Blue",
            "futureAmmo_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Orange",
            // EF 100Rnd coyote tracer variants
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_mag_T_Red",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_mag_T_Yellow",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_mag_T_Green",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_mag_T_White",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_mag_T_Blue",
            "futureAmmo_EF_100Rnd_65x39_caseless_coy_mag_T_Orange"
        };
    };
};

#include "CfgMagazines.hpp"
