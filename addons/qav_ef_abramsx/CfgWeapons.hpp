// =====================================================================
//  futureAmmo compat: QAV_EF_AbramsX_Compat
//  The EF compat REDEFINES (=) the M914 HighROF magazines[] to inject the EF
//  30mm HEAB round. Loading after it (via requiredAddons), we re-append the FA
//  30mm family so both survive regardless of load order.
//
//  Only the 30mm M914 main gun + twin are touched by the EF compat; every
//  other AbramsX weapon (120mm, .50, .338, 7.62) is handled by ghostfa_qav_abramsx.
// =====================================================================

#define FA_MAGS_30MM \
    "FA_60Rnd_30mm_APFSDS", "FA_60Rnd_30mm_APFSDS_Red", \
    "FA_60Rnd_30mm_APFSDS_T_Red", "FA_60Rnd_30mm_APFSDS_T_Yellow", "FA_60Rnd_30mm_APFSDS_T_Green", \
    "FA_60Rnd_30mm_APFSDS_T_White", "FA_60Rnd_30mm_APFSDS_T_Blue", "FA_60Rnd_30mm_APFSDS_T_Orange", "FA_60Rnd_30mm_APFSDS_T_IR", \
    "FA_140Rnd_30mm_API", \
    "FA_140Rnd_30mm_API_T_Red", "FA_140Rnd_30mm_API_T_Yellow", "FA_140Rnd_30mm_API_T_Green", \
    "FA_140Rnd_30mm_API_T_White", "FA_140Rnd_30mm_API_T_Blue", "FA_140Rnd_30mm_API_T_Orange", "FA_140Rnd_30mm_API_T_IR", \
    "FA_250Rnd_30mm_HEI", \
    "FA_250Rnd_30mm_HEI_T_Red", "FA_250Rnd_30mm_HEI_T_Yellow", "FA_250Rnd_30mm_HEI_T_Green", \
    "FA_250Rnd_30mm_HEI_T_White", "FA_250Rnd_30mm_HEI_T_Blue", "FA_250Rnd_30mm_HEI_T_Orange", "FA_250Rnd_30mm_HEI_T_IR", \
    "FA_250Rnd_30mm_ABM", \
    "FA_250Rnd_30mm_ABM_T_Red", "FA_250Rnd_30mm_ABM_T_Yellow", "FA_250Rnd_30mm_ABM_T_Green", \
    "FA_250Rnd_30mm_ABM_T_White", "FA_250Rnd_30mm_ABM_T_Blue", "FA_250Rnd_30mm_ABM_T_Orange", "FA_250Rnd_30mm_ABM_T_IR", \
    "FA_250Rnd_30mm_PROX", \
    "FA_250Rnd_30mm_PROX_T_Red", "FA_250Rnd_30mm_PROX_T_Yellow", "FA_250Rnd_30mm_PROX_T_Green", \
    "FA_250Rnd_30mm_PROX_T_White", "FA_250Rnd_30mm_PROX_T_Blue", "FA_250Rnd_30mm_PROX_T_Orange", "FA_250Rnd_30mm_PROX_T_IR"

class CfgWeapons {
    class autocannon_30mm_CTWS;
    class autocannon_30mm_M914: autocannon_30mm_CTWS {
        class HighROF { magazines[] += { FA_MAGS_30MM }; };
    };
    class autocannon_30mm_M914_twin: autocannon_30mm_CTWS {
        class HighROF { magazines[] += { FA_MAGS_30MM }; };
    };
};
