#pragma once
#include <string>
#include <iostream>
#include "Windows.h"
#include "MacOS.h"
#include "Linux.h"

std::string appGenerator(std::string os) {
	if (os == "Windows") {
		Windows win;
		return win.buildTestPage();
	}
	else if (os == "MacOS") {
		MacOS mac;
		return mac.buildTestPage();
	}
	else if (os == "Linux") {
		Linux lin;
		return lin.buildTestPage();
	}
	else {
		return std::string("Error: exception in platform input");
	}
}