#include "Keyboard.hpp"
#include "functions.hpp"



void Keyboard::PressKeys(const std::string& string) {
	int k = _pressedKeys.size();
	const char delim = '+';
	splitString(string, delim, _pressedKeys);
	if (_pressedKeys.empty()) {
		std::cout << "ERROR" << std::endl;
	}
	else {
		Key  key = Key{};
		std::string command = "";
		
		for (int i = 0; i < _pressedKeys[k].size(); i++) {
			if (i != _pressedKeys[k].size()-1) {
				command = command + _pressedKeys[k][i].Command + "+";
			}
			else {
				command = command + _pressedKeys[k][i].Command;
			}

		}
		key.Command = command;
		_keys.emplace(key);
	}
	k++;
}

void Keyboard::Undo() {
	if (!_keys.empty()){
		std::cout << "\nUndo " << _keys.top().Command;
		_keys.pop();
	}
	else {
		std::cout << "\nERROR undo" << std::endl;
	}
}

void Keyboard::AddKey(Key key) {
	_keys.emplace(key);
}
