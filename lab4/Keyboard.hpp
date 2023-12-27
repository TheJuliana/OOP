#pragma once
#include <__msvc_chrono.hpp>
#include <mutex>
#include <stack>
#include <vector>
#include <sstream>
#include <iostream>

struct Key {
	std::string Command;
};

class Keyboard {
protected:
	//массив использованых команд
	std::stack<Key> _keys;
	//массив клавиш, нажатых одновременно
	std::vector<std::vector<Key>> _pressedKeys;
public:
	void PressKeys(const std::string& string);
	void Undo();
	void AddKey(Key key);
};



