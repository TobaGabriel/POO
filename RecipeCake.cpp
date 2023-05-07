#include "RecipeCake.h"

RecipeCake::RecipeCake()
{
	name = "n/a";
	time = 0;
}

RecipeCake::RecipeCake(std::string name, int time)
{
	this->name = name;
	this->time = time;
}

RecipeCake::RecipeCake(std::string name)
{
	this->name = name;
	this->time = 0;
}

std::string RecipeCake::getName()
{
	return name;
}

int RecipeCake::getTime()
{
	return time;
}
