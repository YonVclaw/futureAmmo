#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_ballistics",
            "ghostfa_main",
            "cba_main",
            // vanilla placeholder bullet bases (9x39 / 14.5 / 5.7)
            "A3_Weapons_F",
            // 14.5x114 7N62 HEAB hooks the antidrone proximity-fuze registry
            "ghostfa_antidrone"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
        ammo[] = {
            "FA_o_ammo_9x39_7U15", "FA_o_ammo_9x39_7U16",
            "FA_o_ammo_145_7N60", "FA_o_ammo_145_7N61", "FA_o_ammo_145_7N62",
            "FA_b_ammo_57_Mk430", "FA_b_ammo_57_Mk431"
        };
        magazines[] = {
            "FA_o_20Rnd_9x39_7U15", "FA_o_20Rnd_9x39_7U16",
            "FA_b_50Rnd_57x28_Mk430", "FA_b_50Rnd_57x28_Mk431",
            "FA_b_20Rnd_57x28_Mk430", "FA_b_20Rnd_57x28_Mk431",
            "FA_o_5Rnd_145_7N60", "FA_o_5Rnd_145_7N61", "FA_o_5Rnd_145_7N62"
        };
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazinewells.hpp"
