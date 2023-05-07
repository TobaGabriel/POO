#pragma once
#include "CommandTaker.h"
#include "RecipeCake.h"

#include <iostream>
#include <list>
#include <fstream>

class CommandPanel
{
private:
	list <RecipeCake*> menu;
	CommandTaker commandTaker;
public:
	CommandPanel();
	void showProducts();
	void selectProduct(std::string name);
	void selectProduct(std::string name, int numberOfProducts);
	void showProductsInCarousel();
};
