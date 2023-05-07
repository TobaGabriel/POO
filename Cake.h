#pragma once

#include <string.h>
#include <iostream>

class Cake
{
private:
	std::string name;
public:
	Cake();
	Cake(std::string name);
	std::string getName();
	void setStorage(std::string name);
};

