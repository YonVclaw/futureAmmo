#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostfa_main",
            "cba_main",
            "ace_ballistics"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
        ammo[] = {
            // 5.56 Mk361 PAB
            "FA_556_Mk361_PAB",
            // 7.62 Mk362 PAB
            "FA_762_Mk362_PAB",
            // .300 BLK Mk363 PAB
            "FA_300_Mk363_PAB",
            // 40mm Mk364 PAB
            "FA_40mm_Mk364_PAB",
            // .50 Mk366 PAB
            "FA_127_Mk366_PAB",
            // 6.5 caseless Mk367 PAB
            "FA_65_Mk367_PAB",
            // .338 Mk373 PAB
            "FA_338_Mk373_PAB",
            // PAB tracer ammo
            "FA_556_Mk361_PAB_T_Red",
            "FA_556_Mk361_PAB_T_Yellow",
            "FA_556_Mk361_PAB_T_Green",
            "FA_556_Mk361_PAB_T_White",
            "FA_556_Mk361_PAB_T_Blue",
            "FA_556_Mk361_PAB_T_Orange",
            "FA_762_Mk362_PAB_T_Red",
            "FA_762_Mk362_PAB_T_Yellow",
            "FA_762_Mk362_PAB_T_Green",
            "FA_762_Mk362_PAB_T_White",
            "FA_762_Mk362_PAB_T_Blue",
            "FA_762_Mk362_PAB_T_Orange",
            "FA_300_Mk363_PAB_T_Red",
            "FA_300_Mk363_PAB_T_Yellow",
            "FA_300_Mk363_PAB_T_Green",
            "FA_300_Mk363_PAB_T_White",
            "FA_300_Mk363_PAB_T_Blue",
            "FA_300_Mk363_PAB_T_Orange",
            "FA_127_Mk366_PAB_T_Red",
            "FA_127_Mk366_PAB_T_Yellow",
            "FA_127_Mk366_PAB_T_Green",
            "FA_127_Mk366_PAB_T_White",
            "FA_127_Mk366_PAB_T_Blue",
            "FA_127_Mk366_PAB_T_Orange",
            "FA_65_Mk367_PAB_T_Red",
            "FA_65_Mk367_PAB_T_Yellow",
            "FA_65_Mk367_PAB_T_Green",
            "FA_65_Mk367_PAB_T_White",
            "FA_65_Mk367_PAB_T_Blue",
            "FA_65_Mk367_PAB_T_Orange",
            "FA_338_Mk373_PAB_T_Red",
            "FA_338_Mk373_PAB_T_Yellow",
            "FA_338_Mk373_PAB_T_Green",
            "FA_338_Mk373_PAB_T_White",
            "FA_338_Mk373_PAB_T_Blue",
            "FA_338_Mk373_PAB_T_Orange"
        };
        magazines[] = {
            // 5.56 Mk361 PAB
            "FA_30Rnd_556_Mk361_PAB",
            // 7.62 Mk362 PAB
            "FA_20Rnd_762_Mk362_PAB",
            // .300 BLK Mk363 PAB
            "FA_30Rnd_300_Mk363_PAB",
            // 40mm Mk364 PAB
            "FA_1Rnd_40mm_Mk364_PAB",
            "FA_3Rnd_40mm_Mk364_PAB",
            // .50 Mk366 PAB
            "FA_100Rnd_127_Mk366_PAB",
            // 6.5 caseless Mk367 PAB 30Rnd (Sand / Green / Black)
            "FA_30Rnd_65_Mk367_PAB",
            "FA_30Rnd_65_Mk367_PAB_Green",
            "FA_30Rnd_65_Mk367_PAB_Black",
            // 6.5 caseless Mk367 PAB 100Rnd (Sand / Khaki / Black) — Mk200 LMG
            "FA_100Rnd_65_Mk367_PAB",
            "FA_100Rnd_65_Mk367_PAB_Khaki",
            "FA_100Rnd_65_Mk367_PAB_Black",
            // 6.5 Mk367 PAB — 200Rnd cased box (Mk200 LMG)
            "FA_200Rnd_65_Mk367_PAB",
            // .338 Mk373 PAB
            "FA_10Rnd_338_Mk373_PAB",
            // 6.5 caseless Mk367 PAB 30Rnd MSBS
            "FA_30Rnd_65_Mk367_PAB_MSBS",
            // PAB tracer mags
            "FA_30Rnd_556_Mk361_PAB_T_Red",
            "FA_30Rnd_556_Mk361_PAB_T_Yellow",
            "FA_30Rnd_556_Mk361_PAB_T_Green",
            "FA_30Rnd_556_Mk361_PAB_T_White",
            "FA_30Rnd_556_Mk361_PAB_T_Blue",
            "FA_30Rnd_556_Mk361_PAB_T_Orange",
            "FA_20Rnd_762_Mk362_PAB_T_Red",
            "FA_20Rnd_762_Mk362_PAB_T_Yellow",
            "FA_20Rnd_762_Mk362_PAB_T_Green",
            "FA_20Rnd_762_Mk362_PAB_T_White",
            "FA_20Rnd_762_Mk362_PAB_T_Blue",
            "FA_20Rnd_762_Mk362_PAB_T_Orange",
            "FA_30Rnd_300_Mk363_PAB_T_Red",
            "FA_30Rnd_300_Mk363_PAB_T_Yellow",
            "FA_30Rnd_300_Mk363_PAB_T_Green",
            "FA_30Rnd_300_Mk363_PAB_T_White",
            "FA_30Rnd_300_Mk363_PAB_T_Blue",
            "FA_30Rnd_300_Mk363_PAB_T_Orange",
            "FA_100Rnd_127_Mk366_PAB_T_Red",
            "FA_100Rnd_127_Mk366_PAB_T_Yellow",
            "FA_100Rnd_127_Mk366_PAB_T_Green",
            "FA_100Rnd_127_Mk366_PAB_T_White",
            "FA_100Rnd_127_Mk366_PAB_T_Blue",
            "FA_100Rnd_127_Mk366_PAB_T_Orange",
            "FA_30Rnd_65_Mk367_PAB_T_Red",
            "FA_30Rnd_65_Mk367_PAB_T_Yellow",
            "FA_30Rnd_65_Mk367_PAB_T_Green",
            "FA_30Rnd_65_Mk367_PAB_T_White",
            "FA_30Rnd_65_Mk367_PAB_T_Blue",
            "FA_30Rnd_65_Mk367_PAB_T_Orange",
            "FA_30Rnd_65_Mk367_PAB_Green_T_Red",
            "FA_30Rnd_65_Mk367_PAB_Green_T_Yellow",
            "FA_30Rnd_65_Mk367_PAB_Green_T_Green",
            "FA_30Rnd_65_Mk367_PAB_Green_T_White",
            "FA_30Rnd_65_Mk367_PAB_Green_T_Blue",
            "FA_30Rnd_65_Mk367_PAB_Green_T_Orange",
            "FA_30Rnd_65_Mk367_PAB_Black_T_Red",
            "FA_30Rnd_65_Mk367_PAB_Black_T_Yellow",
            "FA_30Rnd_65_Mk367_PAB_Black_T_Green",
            "FA_30Rnd_65_Mk367_PAB_Black_T_White",
            "FA_30Rnd_65_Mk367_PAB_Black_T_Blue",
            "FA_30Rnd_65_Mk367_PAB_Black_T_Orange",
            "FA_100Rnd_65_Mk367_PAB_T_Red",
            "FA_100Rnd_65_Mk367_PAB_T_Yellow",
            "FA_100Rnd_65_Mk367_PAB_T_Green",
            "FA_100Rnd_65_Mk367_PAB_T_White",
            "FA_100Rnd_65_Mk367_PAB_T_Blue",
            "FA_100Rnd_65_Mk367_PAB_T_Orange",
            "FA_100Rnd_65_Mk367_PAB_Khaki_T_Red",
            "FA_100Rnd_65_Mk367_PAB_Khaki_T_Yellow",
            "FA_100Rnd_65_Mk367_PAB_Khaki_T_Green",
            "FA_100Rnd_65_Mk367_PAB_Khaki_T_White",
            "FA_100Rnd_65_Mk367_PAB_Khaki_T_Blue",
            "FA_100Rnd_65_Mk367_PAB_Khaki_T_Orange",
            "FA_100Rnd_65_Mk367_PAB_Black_T_Red",
            "FA_100Rnd_65_Mk367_PAB_Black_T_Yellow",
            "FA_100Rnd_65_Mk367_PAB_Black_T_Green",
            "FA_100Rnd_65_Mk367_PAB_Black_T_White",
            "FA_100Rnd_65_Mk367_PAB_Black_T_Blue",
            "FA_100Rnd_65_Mk367_PAB_Black_T_Orange",
            "FA_200Rnd_65_Mk367_PAB_T_Red",
            "FA_200Rnd_65_Mk367_PAB_T_Yellow",
            "FA_200Rnd_65_Mk367_PAB_T_Green",
            "FA_200Rnd_65_Mk367_PAB_T_White",
            "FA_200Rnd_65_Mk367_PAB_T_Blue",
            "FA_200Rnd_65_Mk367_PAB_T_Orange",
            "FA_10Rnd_338_Mk373_PAB_T_Red",
            "FA_10Rnd_338_Mk373_PAB_T_Yellow",
            "FA_10Rnd_338_Mk373_PAB_T_Green",
            "FA_10Rnd_338_Mk373_PAB_T_White",
            "FA_10Rnd_338_Mk373_PAB_T_Blue",
            "FA_10Rnd_338_Mk373_PAB_T_Orange",
            "FA_30Rnd_65_Mk367_PAB_MSBS_T_Red",
            "FA_30Rnd_65_Mk367_PAB_MSBS_T_Yellow",
            "FA_30Rnd_65_Mk367_PAB_MSBS_T_Green",
            "FA_30Rnd_65_Mk367_PAB_MSBS_T_White",
            "FA_30Rnd_65_Mk367_PAB_MSBS_T_Blue",
            "FA_30Rnd_65_Mk367_PAB_MSBS_T_Orange"
        };
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazinewells.hpp"
#include "CfgVehicles.hpp"
