#include <iostream>
#include <string>
using namespace std;

class Menu {
private:
	string menuTitle;
public:
	void setName(string c);
	string getName();
};

void Menu::setName(string c) {
	menuTitle = c;
}

string Menu::getName() {
	return menuTitle;
}

int main() {
	Menu menu;
	menu.setName("ƒIƒ€‚»‚Î");
	cout << menu.getName() << "\n";
	return 0;
}
