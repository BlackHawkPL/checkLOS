#include "script_macros.hpp"

//TODO:
//handle not-clicking during briefing (?)
//add nice documentation
//nice tooltip next to mouse cursor informing about current state
//type check params (?)
//heatmap for areas that can't be seen
//add profile entry for reading instructions
//add simple settings to menu
//add aborting
//add fancy cursor
//terminate generation on map close (ESC key)
//special case when view is completely obstructed
//protect people from long freeze in briefing
//in briefing send data to draw EH to have it process the data every frame

#include "settings.sqf"

PREP(abort);
PREP(closeChart);
PREP(createMarker);
PREP(determineEnvironment);
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