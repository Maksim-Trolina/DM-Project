#include <iostream>
#include "Modules.h"

using namespace std;

void NaturalNumbersMenu() {

	cout << "1)Сложить два натуральных числа" << endl;
	cout << "2)Вычесть одно натуральное число из другого" << endl;
	cout << "3)Умножить два натуральных числа" << endl;
	cout << "4)Вычислить частное от деления большего натурального числа на меньшее или равное натуральное число" << endl;
	cout << "5)Вычислить остаток от деления большего натурального числа на меньшее или равное натуральное число" << endl;
	cout << "6)НОД двух натуральных чисел" << endl;
	cout << "7)НОК двух натуральных чисел" << endl;
	cout << "8)Вернуться назад" << endl;
	cout << "Чтобы выбрать интересующий вас пункт,необходимо ввести его номер" << endl;

	string menuItem;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		Again(NaturalNumbersMenu);
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
		system("cls");
		StartMenu();
		return;
	default:
		Again(NaturalNumbersMenu);
		return;
	}
}