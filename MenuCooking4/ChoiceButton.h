#ifndef __CHOICE_BUTTON__
#define __CHOICE_BUTTON__

#include <iostream>
#include <string>
using namespace std;

class ChoiceButton {
private:
	string menuTitle;
public:
	void setName(string c);
	string getName();
};

#endif
