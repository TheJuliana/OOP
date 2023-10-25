#include "functions.hpp"

void splitString(std::string const& str, const char delim, std::vector<std::vector<Key>>& out) {

	std::vector<Key> keys;
	std::stringstream ss(str);

	std::string s;
	while (std::getline(ss, s, delim)) {

		Key key = Key{};
		key.Command = s;
		std::cout  << key.Command << " ";
		keys.emplace_back(key);

	}
	std::cout << std::endl;
	out.emplace_back(keys);

}

void Workflow() {
	auto keyboard = Keyboard{};
	auto key = Key{};
	key.Command = "a";
	keyboard.AddKey(key);

	keyboard.PressKeys("Shift+a");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("b+C");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("Shift+a");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("Alt+b");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();

}