#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "futureAmmo_antidrone",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_HK437",
            "Weapons_F_JCA_IA_Rifles_HK433",
            "Weapons_F_JCA_IA_Rifles_SR10"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
        magazines[] = {
            // JCA 5.56 EMAG — Mk361 PAB
            "futureAmmo_JCA_30Rnd_556x45_EMAG_Mk361_T_Red",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_Mk361_T_Yellow",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_Mk361_T_Green",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_Mk361_T_White",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_Mk361_T_Blue",
            "futureAmmo_JCA_30Rnd_556x45_EMAG_Mk361_T_Orange",
            // JCA 5.56 EMAG Sand — Mk361 PAB
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_Mk361_T_Red",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_Mk361_T_Yellow",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_Mk361_T_Green",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_Mk361_T_White",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_Mk361_T_Blue",
            "futureAmmo_JCA_30Rnd_556x45_sand_EMAG_Mk361_T_Orange",
            // JCA 5.56 PMAG — Mk361 PAB
            "futureAmmo_JCA_30Rnd_556x45_PMAG_Mk361_T_Red",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_Mk361_T_Yellow",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_Mk361_T_Green",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_Mk361_T_White",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_Mk361_T_Blue",
            "futureAmmo_JCA_30Rnd_556x45_PMAG_Mk361_T_Orange",
            // JCA 5.56 PMAG Sand — Mk361 PAB
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_Mk361_T_Red",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_Mk361_T_Yellow",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_Mk361_T_Green",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_Mk361_T_White",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_Mk361_T_Blue",
            "futureAmmo_JCA_30Rnd_556x45_sand_PMAG_Mk361_T_Orange",
            // JCA 7.62 PMAG — Mk362 PAB
            "futureAmmo_JCA_20Rnd_762x51_PMAG_Mk362_T_Red",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_Mk362_T_Yellow",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_Mk362_T_Green",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_Mk362_T_White",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_Mk362_T_Blue",
            "futureAmmo_JCA_20Rnd_762x51_PMAG_Mk362_T_Orange",
            // JCA 7.62 PMAG Sand — Mk362 PAB
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_Mk362_T_Red",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_Mk362_T_Yellow",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_Mk362_T_Green",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_Mk362_T_White",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_Mk362_T_Blue",
            "futureAmmo_JCA_20Rnd_762x51_Sand_PMAG_Mk362_T_Orange",
            // JCA .300 BLK EMAG — Mk363 PAB
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk363_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk363_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk363_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk363_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk363_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_EMAG_Mk363_T_Orange",
            // JCA .300 BLK EMAG Sand — Mk363 PAB
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk363_T_Red",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk363_T_Yellow",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk363_T_Green",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk363_T_White",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk363_T_Blue",
            "futureAmmo_JCA_30Rnd_300BLK_sand_EMAG_Mk363_T_Orange"
        };
    };
};

#include "CfgMagazines.hpp"
