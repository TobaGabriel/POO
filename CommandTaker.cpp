#include "CommandTaker.h"

CommandTaker::CommandTaker()
{
}

Cake CommandTaker::takeCommand(RecipeCake recipe)
{
	Cake cake;
	if (carousel.getCurrentCapacity() > 0 && carousel.getCurrentCapacity() < 10)
	{
		cake = carousel.getCake(recipe.getName());
		return cake;
	}
	return cakeMaker.takeCommand(recipe);
}

Cake CommandTaker::takeCommand(RecipeCake recipe, int nrOfCakes)
{
	Cake orderCake[9];
	int i;
	for (i = 0; i < nrOfCakes; i++)
	{
		cakeMaker.takeCommand(recipe);
		orderCake->setStorage(recipe.getName());
	}
	return Cake();
}

Cake CommandTaker::takeCommand(std::string name)
{
	Cake cake;
	RecipeCake recipe = RecipeCake(name);
	if (carousel.getCurrentCapacity() > 0 && carousel.getCurrentCapacity() < 10)
	{
		cake = carousel.getCake(recipe.getName());
		return cake;
	}
	return cakeMaker.takeCommand(recipe);
}

void CommandTaker::getCakesFromCarousel(int x)
{
	carousel.buyAllCakes(x);
}

bool CommandTaker::checkCarouselOfCakes()
{
	cout << "In carusel sunt " << carousel.getCurrentCapacity() << " prajituri\n";
	if (carousel.getCurrentCapacity() == 0 || carousel.getCurrentCapacity() == 10)
		return false;
	return true;
}

void CommandTaker::refillCarousel()
{
	ifstream f("CakeRecipe.txt");
	string name;
	Cake c;
	while (getline(f, name)) 
	{
		c = cakeMaker.takeCommand(RecipeCake(name, 4));
		if (carousel.addCake(&c) == false)
			return;
	}
	f.close();
}
