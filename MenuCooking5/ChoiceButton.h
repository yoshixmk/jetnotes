#ifndef __CHOICE_BUTTON__
#define __CHOICE_BUTTON__

#include <iostream>
#include <string>
using namespace std;

class ChoiceButton {
private:
	string buttonName;
	//bool lightingStatus;
public:
	void setName(string c);
	string getName();
};

#endif
