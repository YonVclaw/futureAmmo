#include "script_component.hpp"
/*
 * Author: YonV
 * Returns the appropriate side UAV class string.
 *
 * Arguments:
 * 0: Side <SIDE>
 *
 * Return Value:
 * UAV class name <STRING>
 *
 * Public: No
 */
params [["_side", west, [west]]];
switch (_side) do {
    case east:        { "O_UAV_01_F" };
    case independent: { "I_UAV_01_F" };
    default           { "B_UAV_01_F" };
}
