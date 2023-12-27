#include "Keyboard.hpp"
#include "functions.hpp"



void Keyboard::_volumeUp(std::string& cmdUp, std::string& cmdDown)
{
	cmdUp = "Volume Down -15%";
	std::cout << cmdUp << " ";
	cmdDown = "Volume Up +15%";
	_pressedKeys[_pressedKeys.size()-1].pop_back();
	_pressedKeys[_pressedKeys.size() - 1].pop_back();
}

void Keyboard::_volumeDown(std::string& cmdUp, std::string& cmdDown)
{
	cmdUp = "Volume Up +15%";
	std::cout << cmdUp << " ";
	cmdDown = "Volume Down -15%";
	_pressedKeys[_pressedKeys.size() - 1].pop_back();
	_pressedKeys[_pressedKeys.size() - 1].pop_back();
}

void Keyboard::_brightnessUp(std::string& cmdUp, std::string& cmdDown)
{
	cmdUp = "Brightness Down -15%";
	std::cout << cmdUp << " ";
	cmdDown = "Brightness Up +15%";
	_pressedKeys[_pressedKeys.size() - 1].pop_back();
	_pressedKeys[_pressedKeys.size() - 1].pop_back();
}

void Keyboard::_brightnessDown(std::string& cmdUp, std::string& cmdDown)
{
	 cmdUp = "Brightness Up +15%";
	std::cout << cmdUp << " ";
	 cmdDown = "Brightness Down -15%";
	_pressedKeys[_pressedKeys.size() - 1].pop_back();
	_pressedKeys[_pressedKeys.size() - 1].pop_back();
}

void Keyboard::_printKeyboardField()
{
	//вывод текущего клавиатурного поля
	if (!_keys.empty())
	{
		std::cout << "\nkeyboard field: ";
		for (auto i : _keys) {
			for (auto j : i.keys) {
				std::cout << j.Command << " ";
			}
		}
		std::cout << std::endl;
	}
}

void Keyboard::PressKeys(const std::string& string) {
	std::cout << "Entered: " << string << std::endl;
	int k = _pressedKeys.size();
	const char delim = '+';
	//введенная строка разделяется по знаку + и вводится в массив _pressedKeys
	//т.е. происходит симуляция нажатия отдельных клавиш
	splitString(string, delim, _pressedKeys);
	//клавиши с командами
	CommandKey cmdk;
	cmdk.keys = _pressedKeys[k];

	if (_pressedKeys.empty()) {
		std::cout << "ERROR" << std::endl;
	}
	else {
		Key  key = Key{};
		std::string command = "";
		std::string cmdUp;
		std::string cmdDown;
		// если нажаты несколько клавиш -> выполняем команду
		if (_pressedKeys[k].size() != 1) {
			if (_pressedKeys[k].size() == 2) {
				if ((_pressedKeys[k][0].Command == ("Shift") && _pressedKeys[k][1].Command == "a")) {
					_volumeUp(cmdUp, cmdDown);
				}
				else if ((_pressedKeys[k][0].Command == ("Shift") && _pressedKeys[k][1].Command == "d")) {
					_volumeDown(cmdUp, cmdDown);
				}
				else if ((_pressedKeys[k][0].Command == ("Fn") && _pressedKeys[k][1].Command == "f5")) {
					_brightnessUp(cmdUp, cmdDown);
				}
				else if ((_pressedKeys[k][0].Command == ("Fn") && _pressedKeys[k][1].Command == "f4")) {
					_brightnessDown(cmdUp, cmdDown);
				}
			}
			cmdk.keys = _pressedKeys[k];
		}

		cmdk.cmdDo = cmdUp;
		cmdk.cmdUndo = cmdDown;
		_keys.emplace_back(cmdk);
	}
	k++;

	_printKeyboardField();
}

void Keyboard::Undo() {
	if (!_keys.empty()){

		std::cout << "\n-UNDO- ";
		if (!_keys.back().cmdUndo.empty()) {
			std::cout << _keys.back().cmdUndo;
		}
		_keys.pop_back();

		_printKeyboardField();
	}
	else {
		std::cout << "\nThere is nothing to undo" << std::endl;
	}
}
