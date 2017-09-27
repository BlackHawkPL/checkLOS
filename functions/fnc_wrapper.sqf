#include "script_component.hpp"

if (GVAR(IDD) == 12) then {
    _this call CBA_fnc_execNextFrame;
}
else {
    (_this select 1) call (_this select 0);
}
