#include "script_macros.hpp"

//TODO:
//nice tooltip next to mouse cursor informing about current state
//type check params (?)
//add fancy cursor
//terminate generation on map close (ESC key)
//don't put markers in an array, instead dynamically retrieve them by using ID

GVAR(telemetryEnabled) = true;
//GVAR(observerHeight) = 1.8;
GVAR(targetMinHeight) = 1.0;
//GVAR(cellCount) = 10000;
GVAR(disableAfterStart) = true;
GVAR(chartAccuracy) = 5;

[
    QGVAR(cellCount),
    "SLIDER",
    ["cell count", "Affects ""resolution"" of checked area. Higher is prettier but slower. At 10 000 generation time is 5-10 seconds. USE HIGH VALUES WITH CARE"],
    "check LOS",
    [2000, 50000, 10000, 0],
    nil,
    {call FUNC(removeMarkers)}
] call CBA_Settings_fnc_init;
 
[
    QGVAR(observerHeight),
    "SLIDER",
    ["observer's  elevation", "Altitude of observer above ground level. Increase to for example check LOS from rooftop of a building."],
    "check LOS",
    [0.1, 20, 1.8, 1]
] call CBA_Settings_fnc_init;

[
    QGVAR(enabled),
    "CHECKBOX",
    ["enable LOS check tool", "As a mission maker you can force this setting off."],
    "check LOS",
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(profileEnabled),
    "CHECKBOX",
    ["enable terrain profile tool", "As a mission maker you can force this setting off."],
    "check LOS",
    true
] call CBA_Settings_fnc_init;

PREP(abort);
PREP(closeChart);
PREP(createMarker);
PREP(determineEnvironment);
PREP(disable);
PREP(drawProfileChart);
PREP(getInput);
PREP(handleProfileClick);
PREP(initialize);
PREP(mainFunc);
PREP(removeMarkers);
PREP(selectProfilePos);
PREP(selectSize);
PREP(selectSource);
PREP(selectTarget);
PREP(setSize);
PREP(setSource);
PREP(setTarget);
PREP(telemetry);
PREP(terminateEarly);
PREP(wrapper);

if (!isDedicated) then {

    call FUNC(initialize);
    
};
