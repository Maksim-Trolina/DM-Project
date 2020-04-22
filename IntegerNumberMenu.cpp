#include <iostream>
#include "Modules.h"

using namespace std;

void IntegerNumberMenu() {

	cout << "1)—ложить два целых числа" << endl;
	cout << "2)¬ычесть одно целое число из другого" << endl;
	cout << "3)”множить два целых числа" << endl;
	cout << "4)¬ычислить частное от делени€ большего целого числа на меньшее или равное натуральное число" << endl;
	cout << "5)¬ычислить остаток от делени€ большег целого числа на меньшее или равное натуральное число" << endl;
	cout << "6)¬ернутьс€ назад" << endl;
	cout << "„тобы выбрать интересующий вас пункт,необходимо ввести его номер" << endl;

	string menuItem;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		cout << "“акого пункта нет в меню" << endl;
		Again(IntegerNumberMenu);
		return;
	}

	switch (menuItem[0])
	{
	case '1':
		return;
	case '2':
		return;
	case '3':
		return;
	case '4':
		return;
	case '5':
		return;
	case '6':
		system("cls");
		StartMenu();
		return;
	default:
		cout << "“акого пункта нет в меню" << endl;
		Again(IntegerNumberMenu);
		return;
	}

}