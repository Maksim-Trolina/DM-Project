#include <iostream>
#include "Modules.h"

using namespace std;

void StartMenu() {

	cout << "1)Натуральные числа" << endl;
	cout << "2)Целые числа" << endl;
	cout << "3)Рациональные числа" << endl;
	cout << "4)Многочлены с рациональными коэффициентами" << endl;
	cout << "5)Выход" << endl;
	cout << "Чтобы выбрать интересующий вас пункт,необходимо ввести его номер" << endl;

	string menuItem;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		cout << "Такого пункта нет в меню" << endl;
		Again(StartMenu);
		return;
	}
	switch (menuItem[0])
	{
	case '1':
		system("cls");
		NaturalNumbersMenu();
		return;
	case '2':
		system("cls");
		IntegerNumberMenu();
		return;
	case '3':
		system("cls");
		RationalNumberMenu();
		return;
	case '4':
		system("cls");
		PolynomalMenu();
		return;
	case '5':
		exit(0);
	default:
		cout << "Такого пункта нет в меню" << endl;
		Again(StartMenu);
		return;
	}
}