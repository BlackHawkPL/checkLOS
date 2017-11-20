#include "script_component.hpp"

if (count GVAR(heatmapPos) != 0 && {GVAR(heatmapSize) > 100}) then {
    GVAR(heatmapConfirmed) = true;
} else {
    GVAR(heatmapPos) = GVAR(heatmapTempPos);
};