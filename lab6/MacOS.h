#pragma once
#include "Platform.h"
class MacOS : public Platform
{
public:
	MacOS() : Platform() {
		this->setName(std::string("MacOS"));
	};
	std::string buildTestPage() override;
};

