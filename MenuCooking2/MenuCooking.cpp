#include "Menu.h"
#include<string>

int main(void)
{
	Menu menu;
	std::string str="ƒIƒ€‚»‚Î";
	
	menu.setName(str);
	std::cout << menu.getName() << "\n";
	return 0;
}
