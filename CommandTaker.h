#pragma once
#include "CakeMaker.h"
#include "CarouselOfCakes.h"
#include "RecipeCake.h"

#include <iostream>
#include <fstream>

using namespace std;

class CommandTaker
{
private:
	bool checkCarouselOfCakes();
	void refillCarousel();
	RecipeCake carouselRecipe;
	CakeMaker cakeMaker;
	CarouselOfCakes carousel;
public:
	CommandTaker();
	Cake takeCommand(RecipeCake recipe);
	Cake takeCommand(RecipeCake recipe, int nrOfCakes);
	Cake takeCommand(std::string name);
	void getCakesFromCarousel(int x);
};

