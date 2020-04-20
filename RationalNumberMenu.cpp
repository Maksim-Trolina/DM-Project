#include <iostream>
#include "Modules.h"

using namespace std;

void RationalNumberMenu() {
	cout << "1)Сократить дробь" << endl;
	cout << "2)Сложение дробей" << endl;
	cout << "3)Вычитание дробей" << endl;
	cout << "4)Умножение дробей" << endl;
	cout << "5)Деление дробей" << endl;
	cout << "6)Вернуться назад" << endl;
	cout << "Чтобы выбрать интересующий вас пункт,необходимо ввести его номер" << endl;

	string menuItem;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		Again(RationalNumberMenu);
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
		Again(RationalNumberMenu);
		return;
	}

}