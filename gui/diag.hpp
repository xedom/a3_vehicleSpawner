////////////////////////////////////////////////////////////////////////////
//////           This HPP was created by Shinji`s GUI tool            //////
////////////////////////////////////////////////////////////////////////////
class GUI_1000 {
    idd = 1000;
    name = "GUI_1000";
    onLoad = "uiNamespace setVariable ['GUI_1000', _this select 0]; execVM ""setGui.sqf"";";
    onUnLoad = "uiNamespace setVariable ['GUI_1000', nil];";
    movingEnable = false;
    enableSimulation = true;

    class controlsBackground {
        class Background_1100: RscText
        {
            idc = 1100;
            text = "";
            x = 0.337100 * safezoneW + safezoneX;
            y = 0.212900 * safezoneH + safezoneY;
            w = 0.268229 * safezoneW;
            h = 0.523148 * safezoneH;
            ColorBackground[] = {0,0,0,0.694117};
        };
    };
    class controls {
        class Small_1101: RscText
        {
            idc = 1101;
            text = "Spawn Menu";
            x = 0.338402 * safezoneW + safezoneX;
            y = 0.220308 * safezoneH + safezoneY;
            w = 0.263541 * safezoneW;
            h = 0.056481 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
        };
        class Edit_1102: RscEdit
        {
            idc = 1102;
            text = "";
            x = 0.362881 * safezoneW + safezoneX;
            y = 0.293456 * safezoneH + safezoneY;
            w = 0.220833 * safezoneW;
            h = 0.074074 * safezoneH;
            ColorBackground[] = {1,1,1,0};
            ColorText[] = {1,1,1,1};
            colorSelection[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
        class Button_1103: RscButton
        {
            idc = 1103;
            text = "spawn";
            x = 0.406631 * safezoneW + safezoneX;
            y = 0.632345 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.077777 * safezoneH;
            ColorBackground[] = {0,0,0,0.627450};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
            action = "[lbCurSel 1104] execVM ""spawn.sqf""";
        };
        class Listbox_1104: RscListbox
        {
            idc = 1104;
            x = 0.362881 * safezoneW + safezoneX;
            y = 0.380493 * safezoneH + safezoneY;
            w = 0.219791 * safezoneW;
            h = 0.216666 * safezoneH;
            ColorBackground[] = {0,0,0,0.705882};
            ColorText[] = {1,1,1,1};
            colorSelectBackground[] = {0,0,0,1};
            colorSelect[] = {0,0,0,1};

        };
    };
};
////////////////////////////////////////////////////////////////////////////
