//                0                   1                   2               3                    4
// _autoList = ["B_G_Offroad_01_F", 'C_SUV_01_F', 'C_Quadbike_01_F', 'C_Hatchback_01_F', 'C_Truck_02_transport_F'];
_autoList = "getNumber (_x >> 'scope') >= 2 && (configName _x isKindOf 'car' || configName _x isKindOf 'helicopter')" configClasses (configFile >> "CfgVehicles") apply {configName _x};

_selectedAuto = _this select 0;

_numauto = parseNumber(ctrlText 1102) - 1;
_ver = 0;
_dis = 0;

_autotype = _autoList select _selectedAuto;

_auto = (_autotype) createVehicle [0,0,0];
_pos = player getRelPos [10, 0];

_auto setPos [(_pos select 0), (_pos select 1), 1];
_auto setDir (getDir player);

while {_ver < _numauto} do {
  _auto2 = (_autotype) createVehicle [0,0,0];
  _pos = _auto getRelPos [10 + _dis, 0];

  _auto2 setPos [(_pos select 0), (_pos select 1), 1];
  _auto2 setDir (getDir _auto);

  _dis = _dis + 15;
  _ver = _ver + 1;
};
