#include "Windows.h"

#include "LabelWin.h"
#include "TextBoxWin.h"
#include "ComboBoxWin.h"
#include "ButtonWin.h"

std::string Windows::buildTestPage()
{
	LabelWin label1;
	TextBoxWin text1;
	ComboBoxWin cmbox1;
	ButtonWin btn;

	label1.setText(std::string("WinApp"));
	label1.setPosition(Point2D(2, 5));
	label1.setSize(Point2D(3, 10));

	text1.setText(std::string("Test app for WinOS"));
	text1.setPosition(Point2D(5, 7));
	text1.setSize(Point2D(4, 15));

	cmbox1.addItem(std::string("Var 1"));
	cmbox1.addItem(std::string("Var 2"));
	cmbox1.addItem(std::string("Var 3"));
	cmbox1.setPosition(Point2D(8, 3));

	btn.setText(std::string("Click"));
	btn.setPosition(Point2D(10, 15));

	std::cout << label1.draw()  << std::endl;
	std::cout << text1.draw() << std::endl;
	std::cout << cmbox1.draw() << std::endl;
	std::cout << btn.draw() << std::endl;
	return std::string("-----------------Win App test----------------");
}
