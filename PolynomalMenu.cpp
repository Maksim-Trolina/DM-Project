#include "Modules.h"
#include <iostream>

using namespace std;

void PolynomalMenu() {
	
	cout << "1)�������� �����������" << endl;
	cout << "2)��������� �����������" << endl;
	cout << "3)��������� ���������� �� ������������ �����" << endl;
	cout << "4)��������� �����������" << endl;
	cout << "5)������� �� ������� ������ ���������� �� ������" << endl;
	cout << "6)������� �� ������� ������ ���������� �� ������" << endl;
	cout << "7)��� �����������" << endl;
	cout << "8)��������� �� ���������� ������������ ������������� � ��� ����������" << endl;
	cout << "9)����������� ����������" << endl;
	cout << "10)�������������� ���������� - ������� ����� � �������" << endl;
	cout << "11)��������� �����" << endl;
	cout << "����� ������� ������������ ��� �����,���������� ������ ��� �����" << endl;

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