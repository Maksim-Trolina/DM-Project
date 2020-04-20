#include "Modules.h"
#include <iostream>

using namespace std;

void PolynomalMenu() {
	
	cout << "1)Сложение многочленов" << endl;
	cout << "2)Вычитание многочленов" << endl;
	cout << "3)Умножение многочлена на рациональное число" << endl;
	cout << "4)Умножение многочленов" << endl;
	cout << "5)Частное от деления одного многочлена на другой" << endl;
	cout << "6)Остаток от деления одного многочлена на другой" << endl;
	cout << "7)НОД многочленов" << endl;
	cout << "8)Вынесение из многочлена знаменателей коэффициентов и НОД числителей" << endl;
	cout << "9)Производная многочлена" << endl;
	cout << "10)Преобразование многочлена - кратные корни в простые" << endl;
	cout << "11)Вернуться назад" << endl;
	cout << "Чтобы выбрать интересующий вас пункт,необходимо ввести его номер" << endl;

	string menuItem;
	cin >> menuItem;

	if (menuItem.length() < 1 && menuItem.length() > 2) {

		Again(PolynomalMenu);
		return;
	}
	if (menuItem.length() == 2) {
		
		if (menuItem == "10") {

			return;
		}
		if (menuItem == "11") {
			system("cls");
			StartMenu();
			return;
		}
		Again(PolynomalMenu);
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
		return;
	case '7':
		return;
	case '8':
		return;
	case '9':
		return;
	default:
		Again(PolynomalMenu);
		return;
	}

}