#include "Cake.h"

Cake::Cake()
{
    name = "n/a";
}

Cake::Cake(std::string name)
{
    this->name = name;
}

std::string Cake::getName()
{
    return name;
}


void Cake::setStorage(std::string name)
{
    this->name = name;
}
