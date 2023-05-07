#pragma once
#include <string.h>

class RecipeCake
{
private:
	std::string name;
	int time;
public:
	RecipeCake();
	RecipeCake(std::string name);
	RecipeCake(std::string name, int time);
	std::string getName();
	int getTime();
};

