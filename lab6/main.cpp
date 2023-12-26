#include "Windows.h"
#include "app_generator.h"
int main() {
	std::string os = "MacOS";
	std::cout << appGenerator(os) << std::endl;
	return 0;
}