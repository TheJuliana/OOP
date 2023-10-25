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
	std::stack<Key> _keys;
	std::vector<std::vector<Key>> _pressedKeys;
public:
	void PressKeys(const std::string& string); \
	void Undo();
	void AddKey(Key key);
};



