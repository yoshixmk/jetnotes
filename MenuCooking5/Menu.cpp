#include "Menu.h"

using namespace std;

void Menu::thinkingMenu() {
	choiceButton1.setName("Choice1");
	choiceButton2.setName("Choice2");
	choiceButton3.setName("Choice3");
	selectButton.setName("SELECT");

	cout << choiceButton1.getName() << "‚ª‰Ÿ‚³‚ê‚Ü‚µ‚½\n";
	cout << choiceButton2.getName() << "‚ª‰Ÿ‚³‚ê‚Ü‚µ‚½\n";
	cout << selectButton.getName() << "‚ÅŒˆ’è‚³‚ê‚Ü‚µ‚½\n";
}

