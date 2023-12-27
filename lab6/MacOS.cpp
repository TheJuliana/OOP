#include "MacOS.h"
#include "LabelMac.h"
#include "TextBoxMac.h"
#include "ButtonMac.h"

std::string MacOS::buildTestPage()
{
	LabelMac label1;
	LabelMac label2;
	TextBoxMac text;
	ButtonMac btn;

	label1.setText(std::string("MacApp"));
	label1.setPosition(Point2D(2, 5));
	label1.setSize(Point2D(3, 10));

	label2.setText(std::string("Just Label 2"));
	label2.setPosition(Point2D(5, 5));
	label2.setSize(Point2D(3, 10));

	text.setText(std::string("This page for MacOS"));
	text.setPosition(Point2D(8, 7));
	text.setSize(Point2D(4, 15));

	btn.setText(std::string("Click"));
	btn.setPosition(Point2D(10, 15));

	std::cout << label1.draw() << std::endl;
	std::cout << label2.draw() << std::endl;
	std::cout << text.draw() << std::endl;
	std::cout << btn.draw() << std::endl;
	return std::string("-----------------Mac App test----------------");
}
