#include "script_component.hpp"

if (GVAR(heatmapRunning)) exitWith {};

call FUNC(removeHeatmap);

call FUNC(determineEnvironment);

GVAR(heatmapRunning) = true;
GVAR(heatmapTempPos) = [];
GVAR(heatmapPos) = [];
GVAR(heatmapSize) = 0;
GVAR(heatmapConfirmed) = false;

GVAR(heatmapMouseMovingEH_ID) = (findDisplay GVAR(IDD) displayCtrl 51) ctrlAddEventHandler ["mouseMoving", {
    params ["_control", "_posX", "_posY"];
    GVAR(heatmapTempPos) = (_control ctrlMapScreenToWorld [_posX, _posY]);
    if ((count GVAR(heatmapPos)) != 0) then {
        GVAR(heatmapSize) = abs ((GVAR(heatmapPos) select 0) - (GVAR(heatmapTempPos) select 0));
    };
}];

GVAR(heatmapDrawEH_ID) = (findDisplay GVAR(IDD) displayCtrl 51) ctrlAddEventHandler ["Draw", {
    if (count GVAR(heatmapPos) != 0) then {
        _this select 0 drawRectangle [
            [(GVAR(heatmapPos) select 0) + GVAR(heatmapSize) / 2, (GVAR(heatmapPos) select 1) + GVAR(heatmapSize) / 2],
            GVAR(heatmapSize) / 2,
            GVAR(heatmapSize) / 2,
            0,
            [0,0,0,1],
            ""
        ];
    };
}];

[QGVAR(heatmap_ID1), "onMapSingleClick", {_pos call FUNC(handleHeatmapClick)}] call BIS_fnc_addStackedEventHandler;

[
    {GVAR(heatmapConfirmed)}, 
    FUNC(drawHeatmap),
    [],
    100,
    {
        //TODO: add timeout??
    }
] call CBA_fnc_WaitUntilAndExecute;
