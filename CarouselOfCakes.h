#pragma once
#include "Cake.h"

#include <iostream>
#include <string.h>

class CarouselOfCakes
{
private:
	Cake storage[9];
	const unsigned int maxCapacity = 10;
	const unsigned int lowLimit = 3;
public:
	CarouselOfCakes();
	bool addCake(Cake* cake);
	Cake getCake(std::string name);
	int getCurrentCapacity();
	void buyAllCakes(int x);
};

