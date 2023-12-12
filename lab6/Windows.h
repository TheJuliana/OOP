#pragma once
#include "Platform.h"
class Windows : public Platform
{
public:
    Windows() : Platform() {
        this->setName(std::string("Windows"));
    };
    std::string buildTestPage() override;
};

