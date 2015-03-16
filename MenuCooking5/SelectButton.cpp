#include "SelectButton.h"

using namespace std;

SelectButton::SelectButton() {
    lightingStatus = false;
}

void SelectButton::setName(string c) {
	buttonName = c;
}

string SelectButton::getName() {
	return buttonName;
}

bool SelectButton::touchButton() {
    lightingStatus++;
    return lightingStatus;
}