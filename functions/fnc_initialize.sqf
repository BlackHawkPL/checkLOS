#include "script_component.hpp"

GVAR(markers) = [];
GVAR(arrow) = [];
GVAR(running) = false;
GVAR(IDD) = 12;
GVAR(aborted) = false;
GVAR(generating) = false;

GVAR(mouseMovingEH_ID) = nil;
GVAR(drawEH_ID) = nil;
GVAR(keyDownEH_ID) = nil;
GVAR(firstGeneration) = true;

//terrain profile vars
GVAR(chartDrawn) = false;
GVAR(profileStartPos) = [];
GVAR(profileEndPos) = [];
GVAR(profileRunning) = false;

call FUNC(determineEnvironment);

[{time > 0}, {
    if (GVAR(running)) then {
        GVAR(aborted) = true;
        QGVAR(ID1) call FUNC(terminateEarly);
        QGVAR(ID2) call FUNC(terminateEarly);
        QGVAR(ID3) call FUNC(terminateEarly);
    };
    if (count GVAR(markers) > 0) then {
        call FUNC(removeMarkers);
    };
    if (GVAR(disableAfterStart)) then {
        GVAR(getInput) = {hint STR_DISABLED;};
    };
}] call CBA_fnc_WaitUntilAndExecute;

player createDiarySubject [QGVAR(menu), STR_DIARY_SUBJECT];

_info = format [STR_DIARY_TEXT, QFUNC(getInput), QFUNC(removeMarkers), QFUNC(selectProfilePos), QFUNC(closeChart)];
TEST = _info;
player createDiaryRecord [QGVAR(menu), [STR_DIARY_RECORD_NAME, _info]];
