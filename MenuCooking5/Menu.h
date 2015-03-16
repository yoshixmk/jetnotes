#ifndef __MENU__
#define __MENU__

#include "ChoiceButton.h"
#include "SelectButton.h"
#include <iostream>
using namespace std;

class Menu {
private:
	string menuTitle;
	ChoiceButton choiceButton1, choiceButton2, choiceButton3;
	SelectButton selectButton;
public:
	void thinkingMenu();
};

#endif
