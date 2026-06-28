#include "script_component.hpp"
/*
 * Author: YonV
 * Returns the appropriate side UAV terminal class string.
 *
 * Arguments:
 * 0: Side <SIDE>
 *
 * Return Value:
 * UAV terminal class name <STRING>
 *
 * Public: No
 */
params [["_side", west, [west]]];
switch (_side) do {
    case east:        { "O_UavTerminal" };
    case independent: { "I_UavTerminal" };
    default           { "B_UavTerminal" };
}
