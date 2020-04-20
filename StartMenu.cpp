#include <iostream>
#include "Modules.h"

using namespace std;

void StartMenu() {

	cout << "1)����������� �����" << endl;
	cout << "2)����� �����" << endl;
	cout << "3)������������ �����" << endl;
	cout << "4)���������� � ������������� ��������������" << endl;
	cout << "5)�����" << endl;
	cout << "����� ������� ������������ ��� �����,���������� ������ ��� �����" << endl;

	string menuItem;
	cin >> menuItem;

	if (menuItem.length() != 1) {
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
		return;
	default:
		Again(StartMenu);
		return;
	}
}