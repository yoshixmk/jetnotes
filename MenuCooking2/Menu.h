#ifndef __TEST1_H_INCLUDED__
#define __TEST1_H_INCLUDED__

#include <iostream>
#include <string>


class Menu {
private:
	std::string menuTitle;
public:
	void setName(std::string c);
	std::string getName();
};

#endif
