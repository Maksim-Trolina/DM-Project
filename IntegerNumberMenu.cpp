#include <iostream>
#include "Modules.h"

using namespace std;

void IntegerNumberMenu() {

	cout << "1)������� ��� ����� �����" << endl;
	cout << "2)������� ���� ����� ����� �� �������" << endl;
	cout << "3)�������� ��� ����� �����" << endl;
	cout << "4)��������� ������� �� ������� �������� ������ ����� �� ������� ��� ������ ����������� �����" << endl;
	cout << "5)��������� ������� �� ������� ������� ������ ����� �� ������� ��� ������ ����������� �����" << endl;
	cout << "6)��������� �����" << endl;
	cout << "����� ������� ������������ ��� �����,���������� ������ ��� �����" << endl;

	string menuItem;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		cout << "������ ������ ��� � ����" << endl;
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
		cout << "������ ������ ��� � ����" << endl;
		Again(IntegerNumberMenu);
		return;
	}

}