#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_ballistics",
            "cba_main"
        };
        author = "Ghosts of Battle";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class ghostfa {
        dir = "@ghostfa";
        name = "FA";
        author = "Ghosts of Battle";
        logo = "\z\ghostfa\addons\main\data\logo_256.paa";
        logoOver = "\z\ghostfa\addons\main\data\logo_256.paa";
        logoSmall = "\z\ghostfa\addons\main\data\logo_256.paa";
        action = "";
        description = "Advanced munitions for Ghost of Battle operations.";
        VERSION_CONFIG;
    };
};

#include "CfgEden.hpp"
#include "CfgModuleCategories.hpp"
#include "DisplayEden.hpp"
