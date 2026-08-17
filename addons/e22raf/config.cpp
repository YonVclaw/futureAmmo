#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "ace_ballistics",
            "ghostfa_ammo",
            // E22: Russian Armed Forces (Grave) — AK-12 / RPK-12 / SVD-12 / VS-121.
            // skipWhenMissingDependencies self-skips this PBO without the RAF pack.
            "Weapons_F_RAF"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
        magazines[] = {
            "FA_e22raf_30Rnd_545x39_AK12_7N44",
            "FA_e22raf_30Rnd_545x39_AK12_7N44_T_Red",
            "FA_e22raf_30Rnd_545x39_AK12_7N44_T_Yellow",
            "FA_e22raf_30Rnd_545x39_AK12_7N44_T_Green",
            "FA_e22raf_30Rnd_545x39_AK12_7N44_T_White",
            "FA_e22raf_30Rnd_545x39_AK12_7N44_T_Blue",
            "FA_e22raf_30Rnd_545x39_AK12_7N44_T_Orange",
            "FA_e22raf_30Rnd_545x39_AK12_7N44_T_IR",
            "FA_e22raf_30Rnd_545x39_AK12_7N48",
            "FA_e22raf_30Rnd_545x39_AK12_7N48_T_Red",
            "FA_e22raf_30Rnd_545x39_AK12_7N48_T_Yellow",
            "FA_e22raf_30Rnd_545x39_AK12_7N48_T_Green",
            "FA_e22raf_30Rnd_545x39_AK12_7N48_T_White",
            "FA_e22raf_30Rnd_545x39_AK12_7N48_T_Blue",
            "FA_e22raf_30Rnd_545x39_AK12_7N48_T_Orange",
            "FA_e22raf_30Rnd_545x39_AK12_7N48_T_IR",
            "FA_e22raf_30Rnd_545x39_AK12_7U5",
            "FA_e22raf_30Rnd_545x39_AK12_7U5_T_Red",
            "FA_e22raf_30Rnd_545x39_AK12_7U5_T_Yellow",
            "FA_e22raf_30Rnd_545x39_AK12_7U5_T_Green",
            "FA_e22raf_30Rnd_545x39_AK12_7U5_T_White",
            "FA_e22raf_30Rnd_545x39_AK12_7U5_T_Blue",
            "FA_e22raf_30Rnd_545x39_AK12_7U5_T_Orange",
            "FA_e22raf_30Rnd_545x39_AK12_7U5_T_IR",
            "FA_e22raf_75Rnd_545x39_RPK12_7N44",
            "FA_e22raf_75Rnd_545x39_RPK12_7N44_T_Red",
            "FA_e22raf_75Rnd_545x39_RPK12_7N44_T_Yellow",
            "FA_e22raf_75Rnd_545x39_RPK12_7N44_T_Green",
            "FA_e22raf_75Rnd_545x39_RPK12_7N44_T_White",
            "FA_e22raf_75Rnd_545x39_RPK12_7N44_T_Blue",
            "FA_e22raf_75Rnd_545x39_RPK12_7N44_T_Orange",
            "FA_e22raf_75Rnd_545x39_RPK12_7N44_T_IR",
            "FA_e22raf_75Rnd_545x39_RPK12_7N48",
            "FA_e22raf_75Rnd_545x39_RPK12_7N48_T_Red",
            "FA_e22raf_75Rnd_545x39_RPK12_7N48_T_Yellow",
            "FA_e22raf_75Rnd_545x39_RPK12_7N48_T_Green",
            "FA_e22raf_75Rnd_545x39_RPK12_7N48_T_White",
            "FA_e22raf_75Rnd_545x39_RPK12_7N48_T_Blue",
            "FA_e22raf_75Rnd_545x39_RPK12_7N48_T_Orange",
            "FA_e22raf_75Rnd_545x39_RPK12_7N48_T_IR",
            "FA_e22raf_75Rnd_545x39_RPK12_7U5",
            "FA_e22raf_75Rnd_545x39_RPK12_7U5_T_Red",
            "FA_e22raf_75Rnd_545x39_RPK12_7U5_T_Yellow",
            "FA_e22raf_75Rnd_545x39_RPK12_7U5_T_Green",
            "FA_e22raf_75Rnd_545x39_RPK12_7U5_T_White",
            "FA_e22raf_75Rnd_545x39_RPK12_7U5_T_Blue",
            "FA_e22raf_75Rnd_545x39_RPK12_7U5_T_Orange",
            "FA_e22raf_75Rnd_545x39_RPK12_7U5_T_IR",
            "FA_e22raf_16Rnd_762x54_SVD12_HV",
            "FA_e22raf_16Rnd_762x54_SVD12_HV_T_Red",
            "FA_e22raf_16Rnd_762x54_SVD12_HV_T_Yellow",
            "FA_e22raf_16Rnd_762x54_SVD12_HV_T_Green",
            "FA_e22raf_16Rnd_762x54_SVD12_HV_T_White",
            "FA_e22raf_16Rnd_762x54_SVD12_HV_T_Blue",
            "FA_e22raf_16Rnd_762x54_SVD12_HV_T_Orange",
            "FA_e22raf_16Rnd_762x54_SVD12_HV_T_IR",
            "FA_e22raf_10Rnd_762x54_VS121_HV",
            "FA_e22raf_10Rnd_762x54_VS121_HV_T_Red",
            "FA_e22raf_10Rnd_762x54_VS121_HV_T_Yellow",
            "FA_e22raf_10Rnd_762x54_VS121_HV_T_Green",
            "FA_e22raf_10Rnd_762x54_VS121_HV_T_White",
            "FA_e22raf_10Rnd_762x54_VS121_HV_T_Blue",
            "FA_e22raf_10Rnd_762x54_VS121_HV_T_Orange",
            "FA_e22raf_10Rnd_762x54_VS121_HV_T_IR"
        };
    };
};

#include "CfgMagazines.hpp"
#include "CfgMagazinewells.hpp"
