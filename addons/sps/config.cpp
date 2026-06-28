#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "futureAmmo_ammo",
            "SPS_weapons_hk416"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
        magazines[] = {
            // SPS 5.56 G3 PMAG Black
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_B_T_Red",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_B_T_Yellow",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_B_T_Green",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_B_T_White",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_B_T_Blue",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_B_T_Orange",
            // SPS 5.56 G3 PMAG FDE
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_FDE_T_Red",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_FDE_T_Yellow",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_FDE_T_Green",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_FDE_T_White",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_FDE_T_Blue",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_FDE_T_Orange",
            // SPS 5.56 G3 PMAG Sand
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_S_T_Red",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_S_T_Yellow",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_S_T_Green",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_S_T_White",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_S_T_Blue",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_556x45_S_T_Orange",
            // SPS 5.56 Surefire 60rnd
            "futureAmmo_SPS_P_60Rnd_556x45_Surefire_T_Red",
            "futureAmmo_SPS_P_60Rnd_556x45_Surefire_T_Yellow",
            "futureAmmo_SPS_P_60Rnd_556x45_Surefire_T_Green",
            "futureAmmo_SPS_P_60Rnd_556x45_Surefire_T_White",
            "futureAmmo_SPS_P_60Rnd_556x45_Surefire_T_Blue",
            "futureAmmo_SPS_P_60Rnd_556x45_Surefire_T_Orange",
            // SPS 5.56 PMAG 40rnd Black
            "futureAmmo_SPS_pmag40rnd_556x45_B_T_Red",
            "futureAmmo_SPS_pmag40rnd_556x45_B_T_Yellow",
            "futureAmmo_SPS_pmag40rnd_556x45_B_T_Green",
            "futureAmmo_SPS_pmag40rnd_556x45_B_T_White",
            "futureAmmo_SPS_pmag40rnd_556x45_B_T_Blue",
            "futureAmmo_SPS_pmag40rnd_556x45_B_T_Orange",
            // SPS 5.56 PMAG 40rnd Sand
            "futureAmmo_SPS_pmag40rnd_556x45_S_T_Red",
            "futureAmmo_SPS_pmag40rnd_556x45_S_T_Yellow",
            "futureAmmo_SPS_pmag40rnd_556x45_S_T_Green",
            "futureAmmo_SPS_pmag40rnd_556x45_S_T_White",
            "futureAmmo_SPS_pmag40rnd_556x45_S_T_Blue",
            "futureAmmo_SPS_pmag40rnd_556x45_S_T_Orange",
            // SPS 5.56 KAC LAMG 150rnd
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_T_Red",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_T_Yellow",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_T_Green",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_T_White",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_T_Blue",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_T_Orange",
            // SPS 5.56 KAC LAMG 150rnd Tan
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_Tan_T_Red",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_Tan_T_Yellow",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_Tan_T_Green",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_Tan_T_White",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_Tan_T_Blue",
            "futureAmmo_SPS_KAC_LAMG_150rnd_Box_Tan_T_Orange",
            // SPS 7.62 KAC LWAMG 100rnd
            "futureAmmo_SPS_KAC_LWAMG_100rnd_Box_T_Red",
            "futureAmmo_SPS_KAC_LWAMG_100rnd_Box_T_Yellow",
            "futureAmmo_SPS_KAC_LWAMG_100rnd_Box_T_Green",
            "futureAmmo_SPS_KAC_LWAMG_100rnd_Box_T_White",
            "futureAmmo_SPS_KAC_LWAMG_100rnd_Box_T_Blue",
            "futureAmmo_SPS_KAC_LWAMG_100rnd_Box_T_Orange",
            // SPS .300 BLK G3 PMAG Black 110gr
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_B_T_Red",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_B_T_Yellow",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_B_T_Green",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_B_T_White",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_B_T_Blue",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_B_T_Orange",
            // SPS .300 BLK G3 PMAG Sand 110gr
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_S_T_Red",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_S_T_Yellow",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_S_T_Green",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_S_T_White",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_S_T_Blue",
            "futureAmmo_SPS_HKG3PMAG_30Rnd_300BLK_110_S_T_Orange",
            // SPS .338 LM AI AXMC — Mk371 LRP 250gr
            "futureAmmo_SPS_AI_AXMC_338_Mk371_250gr_T_Red",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_250gr_T_Yellow",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_250gr_T_Green",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_250gr_T_White",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_250gr_T_Blue",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_250gr_T_Orange",
            // SPS .338 LM AI AXMC — Mk371 LRP 285gr
            "futureAmmo_SPS_AI_AXMC_338_Mk371_285gr_T_Red",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_285gr_T_Yellow",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_285gr_T_Green",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_285gr_T_White",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_285gr_T_Blue",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_285gr_T_Orange",
            // SPS .338 LM AI AXMC — Mk371 LRP 300gr
            "futureAmmo_SPS_AI_AXMC_338_Mk371_300gr_T_Red",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_300gr_T_Yellow",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_300gr_T_Green",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_300gr_T_White",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_300gr_T_Blue",
            "futureAmmo_SPS_AI_AXMC_338_Mk371_300gr_T_Orange"
        };
    };
};

#include "CfgMagazines.hpp"
