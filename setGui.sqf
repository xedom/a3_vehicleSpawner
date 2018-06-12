_autoList = "getNumber (_x >> 'scope') >= 2 && (configName _x isKindOf 'car' || configName _x isKindOf 'helicopter')" configClasses (configFile >> "CfgVehicles") apply {getText (_x >> "displayName")};

{
    lbAdd [1104, _x];
} forEach _autoList;
