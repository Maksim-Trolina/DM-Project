#include <iostream>
#include "Modules.h"

using namespace std;

void StartMenu() {

	cout << "1) Natural numbers" << endl;
	cout << "2) Integers" << endl;
	cout << "3) Rational numbers" << endl;
	cout << "4) Polynomials with rational coefficients" << endl;
	cout << "5) Exit" << endl;
	cout << "Enter section number" << endl;

	string menuItem;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		cout << "Wrong choice" << endl;
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
		cout << "Wrong choice" << endl;
		Again(StartMenu);
		return;
	}
}