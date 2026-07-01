#include "script_component.hpp"

["CAManBase", "fired", {
    params ["_unit", "", "", "", "_ammo"];
    if (_ammo == "FA_12G_Mk353_BRC" && {GVAR(enableBreaching)}) then {
        [_unit] call FUNC(breach);
    };
}] call CBA_fnc_addClassEventHandler;
