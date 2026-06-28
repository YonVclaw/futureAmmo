#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "futureAmmo_ammo",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_HK437",
            "Weapons_F_JCA_IA_Rifles_HK433",
            "Weapons_F_JCA_IA_Rifles_SR10",
            "JCA_5Rnd_338LM_AWM_Mag"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
        magazines[] = {
            // JCA 5.56 EMAG
            "futureAmmo_JCA_30Rnd_556x45_EMAG_T_Red",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_T_Yellow",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_T_Green",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_T_White",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_T_Blue",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_T_Orange",
            // JCA 5.56 EMAG Sand
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_T_Red",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_T_Yellow",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_T_Green",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_T_White",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_T_Blue",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_T_Orange",
            // JCA 5.56 PMAG
            "futureAmmo_JCA_30Rnd_556x45_PMAG_T_Red",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_T_Yellow",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_T_Green",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_T_White",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_T_Blue",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_T_Orange",
            // JCA 5.56 PMAG Sand
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_T_Red",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_T_Yellow",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_T_Green",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_T_White",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_T_Blue",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_T_Orange",
            // JCA 7.62 PMAG
            "futureAmmo_JCA_20Rnd_762x51_PMAG_T_Red",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_T_Yellow",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_T_Green",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_T_White",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_T_Blue",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_T_Orange",
            // JCA 7.62 PMAG Sand
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_T_Red",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_T_Yellow",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_T_Green",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_T_White",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_T_Blue",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_T_Orange",
            // JCA .300 BLK EMAG — Mk335 supersonic
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk335_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk335_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk335_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk335_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk335_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk335_T_Orange",
            // JCA .300 BLK EMAG — Mk336 supersonic
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk336_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk336_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk336_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk336_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk336_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk336_T_Orange",
            // JCA .300 BLK EMAG — Mk337 supersonic
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk337_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk337_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk337_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk337_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk337_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk337_T_Orange",
            // JCA .300 BLK EMAG — Mk341 subsonic (existing)
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_T_Orange",
            // JCA .300 BLK EMAG — Mk342 subsonic
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk342_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk342_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk342_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk342_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk342_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk342_T_Orange",
            // JCA .300 BLK EMAG — Mk343 subsonic
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk343_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk343_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk343_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk343_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk343_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk343_T_Orange",
            // JCA .300 BLK EMAG Sand — Mk335 supersonic
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk335_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk335_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk335_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk335_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk335_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk335_T_Orange",
            // JCA .300 BLK EMAG Sand — Mk336 supersonic
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk336_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk336_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk336_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk336_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk336_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk336_T_Orange",
            // JCA .300 BLK EMAG Sand — Mk337 supersonic
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk337_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk337_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk337_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk337_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk337_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk337_T_Orange",
            // JCA .300 BLK EMAG Sand — Mk341 subsonic (existing)
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_T_Orange",
            // JCA .300 BLK EMAG Sand — Mk342 subsonic
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk342_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk342_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk342_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk342_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk342_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk342_T_Orange",
            // JCA .300 BLK EMAG Sand — Mk343 subsonic
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk343_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk343_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk343_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk343_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk343_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk343_T_Orange",
            // JCA .338 LM AWM — Mk371 LRP 250gr
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_250gr_T_Red",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_250gr_T_Yellow",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_250gr_T_Green",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_250gr_T_White",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_250gr_T_Blue",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_250gr_T_Orange",
            // JCA .338 LM AWM — Mk371 LRP 285gr
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_285gr_T_Red",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_285gr_T_Yellow",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_285gr_T_Green",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_285gr_T_White",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_285gr_T_Blue",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_285gr_T_Orange",
            // JCA .338 LM AWM — Mk371 LRP 300gr
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_300gr_T_Red",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_300gr_T_Yellow",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_300gr_T_Green",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_300gr_T_White",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_300gr_T_Blue",
            "futureAmmo_JCA_5Rnd_338LM_AWM_Mk371_300gr_T_Orange"
        };
    };
};

#include "CfgMagazines.hpp"
