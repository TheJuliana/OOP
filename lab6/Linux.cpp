#include "Linux.h"
#include "LabelLin.h"
#include "TextBoxLin.h"
#include "ComboBoxLin.h"
#include "ButtonLin.h"


std::string Linux::buildTestPage()
{
	LabelLin label;
	TextBoxLin text1;
	TextBoxLin text2;
	ComboBoxLin cmbox1;
	ButtonLin btn1;
	ButtonLin btn2;

	label.setText(std::string("LinuxApp"));
	label.setPosition(Point2D(2, 5));
	label.setSize(Point2D(3, 10));

	text1.setText(std::string("Test app for LinuxOS"));
	text1.setPosition(Point2D(5, 7));
	text1.setSize(Point2D(4, 15));

	text2.setText(std::string("Just some title 2"));
	text2.setPosition(Point2D(9, 7));
	text2.setSize(Point2D(4, 15));

	cmbox1.addItem(std::string("option 1"));
	cmbox1.addItem(std::string("option 2"));
	cmbox1.addItem(std::string("option 3"));
	cmbox1.setPosition(Point2D(8, 3));

	btn1.setText(std::string("Click"));
	btn1.setPosition(Point2D(10, 15));

	btn2.setText(std::string("About"));
	btn2.setPosition(Point2D(10, 15));

	std::cout << label.draw() << std::endl;
	std::cout << text1.draw() << std::endl;
	std::cout << text2.draw() << std::endl;
	std::cout << cmbox1.draw() << std::endl;
	std::cout << btn1.draw() << std::endl;
	std::cout << btn2.draw() << std::endl;
	return std::string("-----------------Linux App test----------------");
}
