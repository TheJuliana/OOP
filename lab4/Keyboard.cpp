#include "Keyboard.hpp"
#include "functions.hpp"



void Keyboard::PressKeys(const std::string& string) {
	int k = _pressedKeys.size();
	const char delim = '+';
	//введенная строка разделяется по знаку + и вводится в массив _pressedKeys
	//т.е. происходит симуляция нажатия отдельных клавиш
	splitString(string, delim, _pressedKeys);
	if (_pressedKeys.empty()) {
		std::cout << "ERROR" << std::endl;
	}
	else {
		//здесь команда опять собирается в строку со знаком '+' и отправляется в стек _keys
		//для дальнейшей возможности отката действий
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
		std::cout << "\nThere is nothing to undo" << std::endl;
	}
}

void Keyboard::AddKey(Key key) {
	_keys.emplace(key);
}
