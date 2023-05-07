#include <iostream>
#include <string.h>

#include "CommandPanel.h"

using namespace std;

int main() 
{
	int opt, NumarPrajituri;
	string DenumirePrajitura;
	CommandPanel* commandPanel = new CommandPanel();
	do
	{
		cout << "\n---------------------------------\n";
		cout << "0. Iesire\n";
		cout << "1. Afisarea meniului cu prajituri\n";
		cout << "2. Afisarea prajiturilor din carusel\n";
		cout << "3. Cumparati o prajitura\n";
		cout << "\n---------------------------------\n";
		cout << "Optiune: "; cin >> opt;
		switch (opt) {
		case 0:
			exit(0);
			break;
		case 1:
			commandPanel->showProducts();
			break;
		case 2:
			commandPanel->showProductsInCarousel();
			break;
		case 3: 
		{
			cout << endl;
			cout << "Numele prajiturii pe care doriti sa o cumparati "; cin >> DenumirePrajitura;
			cout << "Cate prajituri doriti sa cumparati? "; cin >> NumarPrajituri;
			if (NumarPrajituri == 1)
				commandPanel->selectProduct(DenumirePrajitura);
			else
				commandPanel->selectProduct(DenumirePrajitura, NumarPrajituri);
			break;
		}
		case 7002:
			break;
		default:
			cout << "Optiunea este gresita! Incercati sa introduceti o optiune din meniu." << endl;
			break;
		}

	} while (1);

	system("pause");
	return 0;
}