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
            "ace_ballistics"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
        ammo[] = {
            // 5.56 Mk361 PAB
            "futureAmmo_556_Mk361_PAB",
            "futureAmmo_556_Mk361_PAB_T_Red",
            "futureAmmo_556_Mk361_PAB_T_Yellow",
            "futureAmmo_556_Mk361_PAB_T_Green",
            "futureAmmo_556_Mk361_PAB_T_White",
            "futureAmmo_556_Mk361_PAB_T_Blue",
            "futureAmmo_556_Mk361_PAB_T_Orange",
            // 7.62 Mk362 PAB
            "futureAmmo_762_Mk362_PAB",
            "futureAmmo_762_Mk362_PAB_T_Red",
            "futureAmmo_762_Mk362_PAB_T_Yellow",
            "futureAmmo_762_Mk362_PAB_T_Green",
            "futureAmmo_762_Mk362_PAB_T_White",
            "futureAmmo_762_Mk362_PAB_T_Blue",
            "futureAmmo_762_Mk362_PAB_T_Orange",
            // .300 BLK Mk363 PAB
            "futureAmmo_300_Mk363_PAB",
            "futureAmmo_300_Mk363_PAB_T_Red",
            "futureAmmo_300_Mk363_PAB_T_Yellow",
            "futureAmmo_300_Mk363_PAB_T_Green",
            "futureAmmo_300_Mk363_PAB_T_White",
            "futureAmmo_300_Mk363_PAB_T_Blue",
            "futureAmmo_300_Mk363_PAB_T_Orange",
            // 40mm Mk364 PAB
            "futureAmmo_40mm_Mk364_PAB",
            // .50 Mk366 PAB
            "futureAmmo_127_Mk366_PAB",
            "futureAmmo_127_Mk366_PAB_T_Red",
            "futureAmmo_127_Mk366_PAB_T_Yellow",
            "futureAmmo_127_Mk366_PAB_T_Green",
            "futureAmmo_127_Mk366_PAB_T_White",
            "futureAmmo_127_Mk366_PAB_T_Blue",
            "futureAmmo_127_Mk366_PAB_T_Orange",
            // 6.5 caseless Mk367 PAB
            "futureAmmo_65_Mk367_PAB",
            "futureAmmo_65_Mk367_PAB_T_Red",
            "futureAmmo_65_Mk367_PAB_T_Yellow",
            "futureAmmo_65_Mk367_PAB_T_Green",
            "futureAmmo_65_Mk367_PAB_T_White",
            "futureAmmo_65_Mk367_PAB_T_Blue",
            "futureAmmo_65_Mk367_PAB_T_Orange",
            // .338 Mk373 PAB
            "futureAmmo_338_Mk373_PAB",
            "futureAmmo_338_Mk373_PAB_T_Red",
            "futureAmmo_338_Mk373_PAB_T_Yellow",
            "futureAmmo_338_Mk373_PAB_T_Green",
            "futureAmmo_338_Mk373_PAB_T_White",
            "futureAmmo_338_Mk373_PAB_T_Blue",
            "futureAmmo_338_Mk373_PAB_T_Orange"
        };
        magazines[] = {
            // 5.56 Mk361 PAB
            "futureAmmo_30Rnd_556_Mk361_PAB",
            "futureAmmo_30Rnd_556_Mk361_PAB_T_Red",
            "futureAmmo_30Rnd_556_Mk361_PAB_T_Yellow",
            "futureAmmo_30Rnd_556_Mk361_PAB_T_Green",
            "futureAmmo_30Rnd_556_Mk361_PAB_T_White",
            "futureAmmo_30Rnd_556_Mk361_PAB_T_Blue",
            "futureAmmo_30Rnd_556_Mk361_PAB_T_Orange",
            // 7.62 Mk362 PAB
            "futureAmmo_20Rnd_762_Mk362_PAB",
            "futureAmmo_20Rnd_762_Mk362_PAB_T_Red",
            "futureAmmo_20Rnd_762_Mk362_PAB_T_Yellow",
            "futureAmmo_20Rnd_762_Mk362_PAB_T_Green",
            "futureAmmo_20Rnd_762_Mk362_PAB_T_White",
            "futureAmmo_20Rnd_762_Mk362_PAB_T_Blue",
            "futureAmmo_20Rnd_762_Mk362_PAB_T_Orange",
            // .300 BLK Mk363 PAB
            "futureAmmo_30Rnd_300_Mk363_PAB",
            "futureAmmo_30Rnd_300_Mk363_PAB_T_Red",
            "futureAmmo_30Rnd_300_Mk363_PAB_T_Yellow",
            "futureAmmo_30Rnd_300_Mk363_PAB_T_Green",
            "futureAmmo_30Rnd_300_Mk363_PAB_T_White",
            "futureAmmo_30Rnd_300_Mk363_PAB_T_Blue",
            "futureAmmo_30Rnd_300_Mk363_PAB_T_Orange",
            // 40mm Mk364 PAB
            "futureAmmo_1Rnd_40mm_Mk364_PAB",
            "futureAmmo_3Rnd_40mm_Mk364_PAB",
            // .50 Mk366 PAB
            "futureAmmo_100Rnd_127_Mk366_PAB",
            "futureAmmo_100Rnd_127_Mk366_PAB_T_Red",
            "futureAmmo_100Rnd_127_Mk366_PAB_T_Yellow",
            "futureAmmo_100Rnd_127_Mk366_PAB_T_Green",
            "futureAmmo_100Rnd_127_Mk366_PAB_T_White",
            "futureAmmo_100Rnd_127_Mk366_PAB_T_Blue",
            "futureAmmo_100Rnd_127_Mk366_PAB_T_Orange",
            // 6.5 caseless Mk367 PAB
            "futureAmmo_30Rnd_65_Mk367_PAB",
            "futureAmmo_30Rnd_65_Mk367_PAB_T_Red",
            "futureAmmo_30Rnd_65_Mk367_PAB_T_Yellow",
            "futureAmmo_30Rnd_65_Mk367_PAB_T_Green",
            "futureAmmo_30Rnd_65_Mk367_PAB_T_White",
            "futureAmmo_30Rnd_65_Mk367_PAB_T_Blue",
            "futureAmmo_30Rnd_65_Mk367_PAB_T_Orange",
            // .338 Mk373 PAB
            "futureAmmo_10Rnd_338_Mk373_PAB",
            "futureAmmo_10Rnd_338_Mk373_PAB_T_Red",
            "futureAmmo_10Rnd_338_Mk373_PAB_T_Yellow",
            "futureAmmo_10Rnd_338_Mk373_PAB_T_Green",
            "futureAmmo_10Rnd_338_Mk373_PAB_T_White",
            "futureAmmo_10Rnd_338_Mk373_PAB_T_Blue",
            "futureAmmo_10Rnd_338_Mk373_PAB_T_Orange"
        };
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
