#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "futureAmmo_antidrone",
            "rhsusf_c_weapons"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
        magazines[] = {
            // RHS 5.56 100Rnd M200 Soft Pouch
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_Mk361_T_Red",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_Mk361_T_Yellow",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_Mk361_T_Green",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_Mk361_T_White",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_Mk361_T_Blue",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_Mk361_T_Orange",
            // RHS 5.56 100Rnd M200 Soft Pouch Coyote
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_coyote_Mk361_T_Red",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_coyote_Mk361_T_Yellow",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_coyote_Mk361_T_Green",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_coyote_Mk361_T_White",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_coyote_Mk361_T_Blue",
            "futureAmmo_rhsusf_100Rnd_556x45_M200_soft_pouch_coyote_Mk361_T_Orange",
            // RHS 5.56 30Rnd M855A1 PMAG Tan
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Mk361_T_Red",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Mk361_T_Yellow",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Mk361_T_Green",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Mk361_T_White",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Mk361_T_Blue",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Mk361_T_Orange",
            // RHS 5.56 30Rnd M855A1 PMAG
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Mk361_T_Red",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Mk361_T_Yellow",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Mk361_T_Green",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Mk361_T_White",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Mk361_T_Blue",
            "futureAmmo_rhs_mag_30Rnd_556x45_M855A1_PMAG_Mk361_T_Orange",
            // RHS 5.56 200Rnd M855 Box
            "futureAmmo_rhsusf_200rnd_556x45_M855_box_Mk361_T_Red",
            "futureAmmo_rhsusf_200rnd_556x45_M855_box_Mk361_T_Yellow",
            "futureAmmo_rhsusf_200rnd_556x45_M855_box_Mk361_T_Green",
            "futureAmmo_rhsusf_200rnd_556x45_M855_box_Mk361_T_White",
            "futureAmmo_rhsusf_200rnd_556x45_M855_box_Mk361_T_Blue",
            "futureAmmo_rhsusf_200rnd_556x45_M855_box_Mk361_T_Orange",
            // RHS 5.56 200Rnd M855 Soft Pouch
            "futureAmmo_rhsusf_200Rnd_556x45_M855_soft_pouch_Mk361_T_Red",
            "futureAmmo_rhsusf_200Rnd_556x45_M855_soft_pouch_Mk361_T_Yellow",
            "futureAmmo_rhsusf_200Rnd_556x45_M855_soft_pouch_Mk361_T_Green",
            "futureAmmo_rhsusf_200Rnd_556x45_M855_soft_pouch_Mk361_T_White",
            "futureAmmo_rhsusf_200Rnd_556x45_M855_soft_pouch_Mk361_T_Blue",
            "futureAmmo_rhsusf_200Rnd_556x45_M855_soft_pouch_Mk361_T_Orange",
            // RHS 7.62 M240 Belt
            "futureAmmo_rhs_mag_762x51_M240_Mk362_T_Red",
            "futureAmmo_rhs_mag_762x51_M240_Mk362_T_Yellow",
            "futureAmmo_rhs_mag_762x51_M240_Mk362_T_Green",
            "futureAmmo_rhs_mag_762x51_M240_Mk362_T_White",
            "futureAmmo_rhs_mag_762x51_M240_Mk362_T_Blue",
            "futureAmmo_rhs_mag_762x51_M240_Mk362_T_Orange",
            // RHS 7.62 1100Rnd M240
            "futureAmmo_rhs_mag_1100Rnd_762x51_M240_Mk362_T_Red",
            "futureAmmo_rhs_mag_1100Rnd_762x51_M240_Mk362_T_Yellow",
            "futureAmmo_rhs_mag_1100Rnd_762x51_M240_Mk362_T_Green",
            "futureAmmo_rhs_mag_1100Rnd_762x51_M240_Mk362_T_White",
            "futureAmmo_rhs_mag_1100Rnd_762x51_M240_Mk362_T_Blue",
            "futureAmmo_rhs_mag_1100Rnd_762x51_M240_Mk362_T_Orange",
            // RHS 7.62 M240 200Rnd
            "futureAmmo_rhs_mag_762x51_M240_200_Mk362_T_Red",
            "futureAmmo_rhs_mag_762x51_M240_200_Mk362_T_Yellow",
            "futureAmmo_rhs_mag_762x51_M240_200_Mk362_T_Green",
            "futureAmmo_rhs_mag_762x51_M240_200_Mk362_T_White",
            "futureAmmo_rhs_mag_762x51_M240_200_Mk362_T_Blue",
            "futureAmmo_rhs_mag_762x51_M240_200_Mk362_T_Orange",
            // Vanilla 5.56 30Rnd STANAG
            "futureAmmo_30Rnd_556x45_Stanag_Mk361_T_Red",
            "futureAmmo_30Rnd_556x45_Stanag_Mk361_T_Yellow",
            "futureAmmo_30Rnd_556x45_Stanag_Mk361_T_Green",
            "futureAmmo_30Rnd_556x45_Stanag_Mk361_T_White",
            "futureAmmo_30Rnd_556x45_Stanag_Mk361_T_Blue",
            "futureAmmo_30Rnd_556x45_Stanag_Mk361_T_Orange",
            // Vanilla 5.56 30Rnd STANAG Sand
            "futureAmmo_30Rnd_556x45_Stanag_Sand_Mk361_T_Red",
            "futureAmmo_30Rnd_556x45_Stanag_Sand_Mk361_T_Yellow",
            "futureAmmo_30Rnd_556x45_Stanag_Sand_Mk361_T_Green",
            "futureAmmo_30Rnd_556x45_Stanag_Sand_Mk361_T_White",
            "futureAmmo_30Rnd_556x45_Stanag_Sand_Mk361_T_Blue",
            "futureAmmo_30Rnd_556x45_Stanag_Sand_Mk361_T_Orange",
            // Vanilla 5.56 150Rnd Drum Sand
            "futureAmmo_150Rnd_556x45_Drum_Sand_Mk361_T_Red",
            "futureAmmo_150Rnd_556x45_Drum_Sand_Mk361_T_Yellow",
            "futureAmmo_150Rnd_556x45_Drum_Sand_Mk361_T_Green",
            "futureAmmo_150Rnd_556x45_Drum_Sand_Mk361_T_White",
            "futureAmmo_150Rnd_556x45_Drum_Sand_Mk361_T_Blue",
            "futureAmmo_150Rnd_556x45_Drum_Sand_Mk361_T_Orange",
            // Vanilla 5.56 200Rnd Box
            "futureAmmo_200Rnd_556x45_Box_Mk361_T_Red",
            "futureAmmo_200Rnd_556x45_Box_Mk361_T_Yellow",
            "futureAmmo_200Rnd_556x45_Box_Mk361_T_Green",
            "futureAmmo_200Rnd_556x45_Box_Mk361_T_White",
            "futureAmmo_200Rnd_556x45_Box_Mk361_T_Blue",
            "futureAmmo_200Rnd_556x45_Box_Mk361_T_Orange",
            // Vanilla 5.56 150Rnd Drum
            "futureAmmo_150Rnd_556x45_Drum_Mk361_T_Red",
            "futureAmmo_150Rnd_556x45_Drum_Mk361_T_Yellow",
            "futureAmmo_150Rnd_556x45_Drum_Mk361_T_Green",
            "futureAmmo_150Rnd_556x45_Drum_Mk361_T_White",
            "futureAmmo_150Rnd_556x45_Drum_Mk361_T_Blue",
            "futureAmmo_150Rnd_556x45_Drum_Mk361_T_Orange",
            // Vanilla 5.56 150Rnd Drum Green
            "futureAmmo_150Rnd_556x45_Drum_Green_Mk361_T_Red",
            "futureAmmo_150Rnd_556x45_Drum_Green_Mk361_T_Yellow",
            "futureAmmo_150Rnd_556x45_Drum_Green_Mk361_T_Green",
            "futureAmmo_150Rnd_556x45_Drum_Green_Mk361_T_White",
            "futureAmmo_150Rnd_556x45_Drum_Green_Mk361_T_Blue",
            "futureAmmo_150Rnd_556x45_Drum_Green_Mk361_T_Orange",
            // Vanilla 7.62 20Rnd
            "futureAmmo_20Rnd_762x51_Mk362_T_Red",
            "futureAmmo_20Rnd_762x51_Mk362_T_Yellow",
            "futureAmmo_20Rnd_762x51_Mk362_T_Green",
            "futureAmmo_20Rnd_762x51_Mk362_T_White",
            "futureAmmo_20Rnd_762x51_Mk362_T_Blue",
            "futureAmmo_20Rnd_762x51_Mk362_T_Orange",
            // Vanilla 7.62 10Rnd
            "futureAmmo_10Rnd_762x51_Mk362_T_Red",
            "futureAmmo_10Rnd_762x51_Mk362_T_Yellow",
            "futureAmmo_10Rnd_762x51_Mk362_T_Green",
            "futureAmmo_10Rnd_762x51_Mk362_T_White",
            "futureAmmo_10Rnd_762x51_Mk362_T_Blue",
            "futureAmmo_10Rnd_762x51_Mk362_T_Orange",
            // Vanilla 7.62 1000Rnd Belt
            "futureAmmo_1000Rnd_762x51_Belt_Mk362_T_Red",
            "futureAmmo_1000Rnd_762x51_Belt_Mk362_T_Yellow",
            "futureAmmo_1000Rnd_762x51_Belt_Mk362_T_Green",
            "futureAmmo_1000Rnd_762x51_Belt_Mk362_T_White",
            "futureAmmo_1000Rnd_762x51_Belt_Mk362_T_Blue",
            "futureAmmo_1000Rnd_762x51_Belt_Mk362_T_Orange",
            // Vanilla 7.62 150Rnd Box
            "futureAmmo_150Rnd_762x51_Box_Mk362_T_Red",
            "futureAmmo_150Rnd_762x51_Box_Mk362_T_Yellow",
            "futureAmmo_150Rnd_762x51_Box_Mk362_T_Green",
            "futureAmmo_150Rnd_762x51_Box_Mk362_T_White",
            "futureAmmo_150Rnd_762x51_Box_Mk362_T_Blue",
            "futureAmmo_150Rnd_762x51_Box_Mk362_T_Orange",
            // Vanilla 7.62 200Rnd Belt
            "futureAmmo_200Rnd_762x51_Belt_Mk362_T_Red",
            "futureAmmo_200Rnd_762x51_Belt_Mk362_T_Yellow",
            "futureAmmo_200Rnd_762x51_Belt_Mk362_T_Green",
            "futureAmmo_200Rnd_762x51_Belt_Mk362_T_White",
            "futureAmmo_200Rnd_762x51_Belt_Mk362_T_Blue",
            "futureAmmo_200Rnd_762x51_Belt_Mk362_T_Orange",
            // Vanilla 7.62 2000Rnd Belt
            "futureAmmo_2000Rnd_762x51_Belt_Mk362_T_Red",
            "futureAmmo_2000Rnd_762x51_Belt_Mk362_T_Yellow",
            "futureAmmo_2000Rnd_762x51_Belt_Mk362_T_Green",
            "futureAmmo_2000Rnd_762x51_Belt_Mk362_T_White",
            "futureAmmo_2000Rnd_762x51_Belt_Mk362_T_Blue",
            "futureAmmo_2000Rnd_762x51_Belt_Mk362_T_Orange",
            // Vanilla 7.62 5000Rnd Belt
            "futureAmmo_5000Rnd_762x51_Belt_Mk362_T_Red",
            "futureAmmo_5000Rnd_762x51_Belt_Mk362_T_Yellow",
            "futureAmmo_5000Rnd_762x51_Belt_Mk362_T_Green",
            "futureAmmo_5000Rnd_762x51_Belt_Mk362_T_White",
            "futureAmmo_5000Rnd_762x51_Belt_Mk362_T_Blue",
            "futureAmmo_5000Rnd_762x51_Belt_Mk362_T_Orange"
        };
    };
};

#include "CfgMagazines.hpp"
