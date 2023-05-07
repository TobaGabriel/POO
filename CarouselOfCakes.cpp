#include "CarouselOfCakes.h"

CarouselOfCakes::CarouselOfCakes()
{
}

bool CarouselOfCakes::addCake(Cake* cake)
{
	int i;
	if (maxCapacity - getCurrentCapacity() == maxCapacity)
	{
		std::cout << "Caruselul este plin!\n";
		return false;
	}
	else if (maxCapacity - getCurrentCapacity() < lowLimit)
	{
		for (i = lowLimit - getCurrentCapacity(); i <= lowLimit; i++)
		{
			storage[i].setStorage(cake->getName());
		}
	}
	i = maxCapacity - getCurrentCapacity();
	storage[i].setStorage(cake->getName());
	return true;
}

Cake CarouselOfCakes::getCake(std::string name)
{
	int i;
	if (maxCapacity - getCurrentCapacity() == 0)
	{
		std::cout << "Caruelul este gol!\n";
		return Cake();
	}
	for (i = 0; i < maxCapacity; i++)
	{
		if (storage[i].getName() == name)
		{
			while (i < maxCapacity)
			{
				storage[i] = storage[i + 1];
				i++;
			}
			if (maxCapacity - getCurrentCapacity() <= lowLimit)
				std::cout << "Mai sunt putine prajituri in carusel\n";
			return Cake(name);
		}
	}
	return Cake();
}

int CarouselOfCakes::getCurrentCapacity()
{
	int n, i, storageCakes;
	std::string noname = "n/a";
	n = sizeof(storage) / sizeof(storage[0]);
	storageCakes = 0;
	for (i = 0; i < n; i++)
	{
		if (storage[i].getName() != noname)
			storageCakes++;
	}
	return maxCapacity-storageCakes;
}

void CarouselOfCakes::buyAllCakes(int x)
{
	int i, n;
	n = sizeof(storage) / sizeof(storage[0]);
	for (i = 0; i < n; i++)
	{
		std::cout << "Poftiti: "<<storage[i].getName();
	}
	if (x == 0)
	free(storage);
}
