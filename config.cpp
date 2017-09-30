class CfgPatches {
    class los_check {
        units[] = { "" };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Ui_F"};
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
    class ColorBlack;
    class BH_checkLOS_colorNotVisible
    {
        color[] = {0.1,0.1,0.1,1};
        name = "No LOS";
        scope = 1;
    };
    class BH_checkLOS_colorObstructed
    {
        color[] = {1,0,0.1,1};
        name = "LOS obstruced by object";
        scope = 1;
    };
    class BH_checkLOS_colorVisible
    {
        color[] = {0,0,1,1};
        name = "clear LOS";
        scope = 1;
    };
    class BH_checkLOS_orange
    {
        color[] = {255/255,165/255,0/255, 1};
        name = "orange";
        scope = 2;
    };
    class BH_checkLOS_brown
    {
        color[] = {165/255,42/255,42/255, 1};
        name = "brown";
        scope = 2;
    };
    class BH_checkLOS_dark_green
    {
        color[] = {0/255,100/255,0/255, 1};
        name = "dark green";
        scope = 2;
    };
    class BH_checkLOS_purple
    {
        color[] = {128/255,0/255,128/255, 1};
        name = "purple";
        scope = 2;
    };
    class BH_checkLOS_pink
    {
        color[] = {255/255,192/255,203/255, 1};
        name = "pink";
        scope = 2;
    };
    class BH_checkLOS_gray
    {
        color[] = {169/255,169/255,169/255, 1};
        name = "gray";
        scope = 2;
    };
    class BH_checkLOS_khaki
    {
        color[] = {240/255,230/255,140/255, 1};
        name = "khaki";
        scope = 2;
    };
    class BH_checkLOS_olive
    {
        color[] = {128/255,128/255,0/255, 1};
        name = "olive";
        scope = 2;
    };
    class BH_checkLOS_uo_brown
    {
        color[] = {177/255,158/255,113/255, 1};
        name = "UO Brown™";
        scope = 2;
    };
};
