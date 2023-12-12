#include "Linux.h"
#include "Label.h"
#include "TextBox.h"
#include "ComboBox.h"
#include "Button.h"

std::string Linux::buildTestPage()
{
	Label label1;
	TextBox text1;
	ComboBox cmbox1;
	Button btn;

	label1.setText(std::string("LinuxApp"));
	label1.setPosition(Point2D(2, 5));
	label1.setSize(Point2D(3, 10));

	text1.setText(std::string("Test app for LinuxOS"));
	text1.setPosition(Point2D(5, 7));
	text1.setSize(Point2D(4, 15));

	cmbox1.addItem(std::string("Var 1"));
	cmbox1.addItem(std::string("Var 2"));
	cmbox1.addItem(std::string("Var 3"));
	cmbox1.setPosition(Point2D(8, 3));

	btn.setText(std::string("Click"));
	btn.setPosition(Point2D(10, 15));

	std::cout << label1.draw() << std::endl;
	std::cout << text1.getText() << std::endl;
	std::cout << cmbox1.draw() << std::endl;
	std::cout << btn.draw() << std::endl;
	return std::string("-----------------Linux App test----------------");
}
