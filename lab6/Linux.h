#pragma once
#include "Platform.h"
class Linux : public Platform
{
public:
	Linux() : Platform() {
		this->setName(std::string("Linux"));
	};
	std::string buildTestPage() override;
};

