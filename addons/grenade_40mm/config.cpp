#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "futureAmmo_main",
            "cba_main",
            "A3_Weapons_F"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
        ammo[] = {
            "futureAmmo_40mm_Carrier_Base",
            "futureAmmo_40mm_Mk380_NRP",
            "futureAmmo_40mm_Mk381_SPARCS",
            "futureAmmo_40mm_Mk382_GLUAS",
            "futureAmmo_40mm_Mk383_EMP",
            "futureAmmo_40mm_Mk384_MSmoke",
            "futureAmmo_40mm_Mk385_Decoy",
            "futureAmmo_40mm_Mk386_UGS",
            "futureAmmo_40mm_Mk387_Desig",
            "futureAmmo_40mm_Mk388_Jammer"
        };
        magazines[] = {
            "futureAmmo_1Rnd_40mm_Mk380_NRP",
            "futureAmmo_1Rnd_40mm_Mk381_SPARCS",
            "futureAmmo_1Rnd_40mm_Mk382_GLUAS",
            "futureAmmo_1Rnd_40mm_Mk383_EMP",
            "futureAmmo_1Rnd_40mm_Mk384_MSmoke",
            "futureAmmo_1Rnd_40mm_Mk385_Decoy",
            "futureAmmo_1Rnd_40mm_Mk386_UGS",
            "futureAmmo_1Rnd_40mm_Mk387_Desig",
            "futureAmmo_1Rnd_40mm_Mk388_Jammer"
        };
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
