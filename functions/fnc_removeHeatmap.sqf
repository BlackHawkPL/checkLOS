#include "script_component.hpp"

if (GVAR(heatmapRunning)) exitWith {};

{
	deleteMarkerLocal _x;
} forEach GVAR(heatmapMarkers);

GVAR(heatmapMarkers) = [];
