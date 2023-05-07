#include "CommandPanel.h"

CommandPanel::CommandPanel()
{
}

void CommandPanel::showProducts()
{
	ifstream f("CakeMenu.txt");
	string cake;
	while (getline(f, cake))
		cout << cake << endl;
	f.close();
}

void CommandPanel::showProductsInCarousel()
{
	cout << "Avem urmatoarele prajituri gata preparate:"<<endl;
	commandTaker.getCakesFromCarousel(1);
}

void CommandPanel::selectProduct(std::string name)
{
	cout << "Poftiti prajitura: " << commandTaker.takeCommand(name).getName() << endl;
}

void CommandPanel::selectProduct(std::string name, int numberOfProducts)
{
	Cake select;
	int i;
	select = commandTaker.takeCommand(name, numberOfProducts);
	commandTaker.takeCommand(name);
	for (i = 0; i < numberOfProducts; i++)
		cout << "Poftiti " << name << endl;
}