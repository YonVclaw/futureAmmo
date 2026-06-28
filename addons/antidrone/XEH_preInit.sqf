#include "script_component.hpp"
ADDON = false;

PREP_RECOMPILE_START;
PREP(initAntiDrone);
PREP(trackAD);
PREP(detonateAD);
PREP_RECOMPILE_END;

ADDON = true;
