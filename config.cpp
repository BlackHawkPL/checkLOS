class CfgPatches {
    class los_check {
        units[] = { "" };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
        version = 1;
    };
};

class Extended_PostInit_EventHandlers
{
	class checkLOS
	{
		clientinit="call compile preprocessFileLineNumbers '\checkLOS\init.sqf'";
	};
};


class CfgMarkerColors
{
    class BH_checkLOS_colorNotVisible
    {
        color[] = {0.6,0.6,0.6,1};
        name = "No LOS";
        scope = 2;
    };
    class BH_checkLOS_colorObstructed
    {
        color[] = {1,0,0.1,1};
        name = "LOS obstruced by object";
        scope = 2;
    };
    class BH_checkLOS_colorObstructedPartially1
    {
        color[] = {0.8,0,0.3,1};
        name = "LOS obstruced partially by object (80%)";
        scope = 2;
    };
    class BH_checkLOS_colorObstructedPartially2
    {
        color[] = {0.6,0,0.5,1};
        name = "LOS obstruced partially by object (60%)";
        scope = 2;
    };
    class BH_checkLOS_colorObstructedPartially3
    {
        color[] = {0.4,0,0.7,1};
        name = "LOS obstruced partially by object (40%)";
        scope = 2;
    };
    class BH_checkLOS_colorObstructedPartially4
    {
        color[] = {0.2,0,0.9,1};
        name = "LOS obstruced partially by object (20%)";
        scope = 2;
    };
    class BH_checkLOS_colorVisible
    {
        color[] = {0,0,1,1};
        name = "clear LOS";
        scope = 2;
    };
};
