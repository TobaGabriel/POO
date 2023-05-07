#include "CakeMaker.h"

CakeMaker::CakeMaker()
{
}

Cake CakeMaker::takeCommand(RecipeCake recipe)
{
	Sleep(5000);
	return Cake(recipe.getName());
}
