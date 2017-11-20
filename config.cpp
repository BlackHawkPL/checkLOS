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
        name = "Orange";
        scope = 2;
    };
    class BH_checkLOS_brown
    {
        color[] = {165/255,42/255,42/255, 1};
        name = "Brown";
        scope = 2;
    };
    class BH_checkLOS_dark_green
    {
        color[] = {0/255,100/255,0/255, 1};
        name = "Dark green";
        scope = 2;
    };
    class BH_checkLOS_purple
    {
        color[] = {128/255,0/255,128/255, 1};
        name = "Purple";
        scope = 2;
    };
    class BH_checkLOS_pink
    {
        color[] = {255/255,192/255,203/255, 1};
        name = "Pink";
        scope = 2;
    };
    class BH_checkLOS_gray
    {
        color[] = {169/255,169/255,169/255, 1};
        name = "Gray";
        scope = 2;
    };
    class BH_checkLOS_khaki
    {
        color[] = {240/255,230/255,140/255, 1};
        name = "Khaki";
        scope = 2;
    };
    class BH_checkLOS_olive
    {
        color[] = {128/255,128/255,0/255, 1};
        name = "Olive";
        scope = 2;
    };
    class BH_checkLOS_uo_brown
    {
        color[] = {177/255,158/255,113/255, 1};
        name = "UO Brown™";
        scope = 2;
    };
    class BH_checkLOS_heatmap1
    {
        color[] = {0/255,100/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap2
    {
        color[] = {0/255,110/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap3
    {
        color[] = {0/255,120/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap4
    {
        color[] = {0/255,130/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap5
    {
        color[] = {0/255,140/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap6
    {
        color[] = {0/255,150/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap7
    {
        color[] = {0/255,160/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap8
    {
        color[] = {0/255,170/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap9
    {
        color[] = {0/255,180/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap10
    {
        color[] = {0/255,190/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap11
    {
        color[] = {40/255,200/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap12
    {
        color[] = {60/255,210/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap13
    {
        color[] = {80/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap14
    {
        color[] = {100/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap15
    {
        color[] = {110/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap16
    {
        color[] = {120/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap17
    {
        color[] = {130/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap18
    {
    color[] = {140/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap19
    {
        color[] = {150/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap20
    {
        color[] = {160/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap21
    {
        color[] = {170/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap22
    {
    color[] = {180/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap23
    {
        color[] = {190/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap24
    {
        color[] = {200/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap25
    {
        color[] = {210/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap26
    {
    color[] = {220/255,220/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap27
    {
    color[] = {220/255,210/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap28
    {
    color[] = {220/255,200/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap29
    {
    color[] = {220/255,190/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap30
    {
    color[] = {220/255,180/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap31
    {
    color[] = {220/255,170/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap32
    {
    color[] = {220/255,160/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap33
    {
    color[] = {220/255,150/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap34
    {
    color[] = {220/255,140/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap35
    {
    color[] = {220/255,130/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap36
    {
    color[] = {220/255,120/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap37
    {
    color[] = {220/255,110/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap38
    {
    color[] = {220/255,100/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap39
    {
    color[] = {220/255,90/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap40
    {
    color[] = {220/255,80/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap41
    {
    color[] = {220/255,70/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap42
    {
    color[] = {220/255,60/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap43
    {
    color[] = {215/255,55/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap44
    {
    color[] = {210/255,50/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap45
    {
    color[] = {205/255,45/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
    class BH_checkLOS_heatmap46
    {
    color[] = {200/255,40/255,0/255, 1};
        name = "heatmap";
        scope = 0;
    };
};
