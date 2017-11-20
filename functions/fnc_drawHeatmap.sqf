#include "script_component.hpp"

#define C 100



(findDisplay GVAR(IDD) displayCtrl 51) ctrlRemoveEventHandler ["mouseMoving", GVAR(heatmapMouseMovingEH_ID)];
(findDisplay GVAR(IDD) displayCtrl 51) ctrlRemoveEventHandler ["Draw", GVAR(heatmapDrawEH_ID)];
[QGVAR(heatmap_ID1), "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;

private _pos = GVAR(heatmapPos);
private _size = GVAR(heatmapSize);
private _cellSize = _size / C;

private _elevationOffset = getNumber (configFile >> "CfgWorlds" >> worldName >> "elevationOffset");

private _highest = -10000;
private _lowest = 10000;

for "_i" from 0 to C do {
    for "_j" from 0 to C do {
        private _height = (ATLtoASL [(_pos select 0) + _cellSize * (_i + 0.5), (_pos select 1) + _cellSize * (_j + 0.5), 0]) select 2;
        if (_height > _highest) then {_highest = _height};
        if (_height < _lowest) then {_lowest = _height};
    };
};

private _diff = _highest - _lowest;

if (_diff == 0) then {_diff = 0.001;};

for "_i" from 0 to C do {
    for "_j" from 0 to C do {
        _marker = createMarkerLocal [(str _i) + "_" + (str _j), [(_pos select 0) + _cellSize * _i, (_pos select 1) + _cellSize * _j]];
        _marker setMarkerShapeLocal "RECTANGLE";
        _marker setMarkerBrushLocal "Solid";
        _height = (ATLtoASL [(_pos select 0) + _cellSize * (_i + 0.5), (_pos select 1) + _cellSize * (_j + 0.5), 0]) select 2;
        //_marker setMarkerPosLocal _pos;
        _c = (_height - _lowest) / _diff;
        if (_c == 0) then {_c = 0.01};
        if (_c == 1) then {_c = 0.99};
        _marker setMarkerAlphaLocal 1;
        _color = "BH_checkLOS_heatmap" + str ceil (_c * 46);
        _marker setMarkerColorLocal _color;
        _marker setMarkerSizeLocal [_cellSize/2,_cellSize/2];
        GVAR(heatmapMarkers) pushBack _marker;
    };
};

GVAR(heatmapRunning) = false;
