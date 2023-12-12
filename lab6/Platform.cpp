#include "Platform.h"
#include "Label.h"

void Platform::setName(std::string name)
{
    this->_name = name;
}

std::string Platform::getName()
{
    return std::string(this->_name);
}

std::string Platform::buildTestPage()
{
    return std::string("platf_tp");
}
