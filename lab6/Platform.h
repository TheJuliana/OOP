#pragma once
#include <string>
#include <iostream>
class Platform
{
private:
	std::string _name;
public:
	Platform() {
		this->setName(std::string("base class platform"));
		std::cout << this->getName() << " destructor" << std::endl;
	};
	virtual ~Platform() {
		std::cout << this->getName() << " destructor" << std::endl;
	};
	void setName(std::string name);
	std::string getName();
	virtual std::string buildTestPage();

};

