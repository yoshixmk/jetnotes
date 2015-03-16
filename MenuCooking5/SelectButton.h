#ifndef __SELECT_BUTTON__
#define __SELECT_BUTTON__

#include <iostream>
#include <string>
using namespace std;

class SelectButton {
private:
	string buttonName;
	bool lightingStatus;
public:
    SelectButton();
	void setName(string c);
	string getName();
	bool touchButton();
};
#endif
