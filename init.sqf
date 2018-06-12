
_admins = ["",""];

if ((getPlayerUID player) in _admins) {player addAction ['Open Menu', 'createDialog "GUI_1000"'];};
