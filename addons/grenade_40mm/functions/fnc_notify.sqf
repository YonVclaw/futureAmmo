#include "script_component.hpp"
/*
 * Author: YonV
 * Shows a hint to the firer if they are local and have an interface.
 *
 * Arguments:
 * 0: Firer <OBJECT>
 * 1: HTML hint text <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params [
    ["_unit", objNull, [objNull]],
    ["_msg",  "",      [""]]
];
if (local _unit && {hasInterface}) then { hint parseText _msg };
