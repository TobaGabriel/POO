#pragma once
#include "Cake.h"
#include "RecipeCake.h"

#include <Windows.h>
#include <iostream>

class CakeMaker
{
public:
	CakeMaker();
	Cake takeCommand(RecipeCake recipe);
};

