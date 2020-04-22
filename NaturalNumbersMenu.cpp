#include <iostream>
#include "Modules.h"

using namespace std;

void NaturalNumbersMenu() {

	cout << "1)������� ��� ����������� �����" << endl;
	cout << "2)������� ���� ����������� ����� �� �������" << endl;
	cout << "3)�������� ��� ����������� �����" << endl;
	cout << "4)��������� ������� �� ������� �������� ������������ ����� �� ������� ��� ������ ����������� �����" << endl;
	cout << "5)��������� ������� �� ������� �������� ������������ ����� �� ������� ��� ������ ����������� �����" << endl;
	cout << "6)��� ���� ����������� �����" << endl;
	cout << "7)��� ���� ����������� �����" << endl;
	cout << "8)��������� �����" << endl;
	cout << "����� ������� ������������ ��� �����,���������� ������ ��� �����" << endl;

	string menuItem;
	string number1;
	string number2;
	int* num1;
	int* num2;
	int* result;
	int lenRes = 0;
	int sign1;
	int sign2;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		Again(NaturalNumbersMenu);
		return;
	}
	switch (menuItem[0])
	{
	case '1':
		system("cls");
		number1 = RequestNumber(CheckForNatural, sign1);
		if (number1 == "404%%aa^9*") {
			Again(NaturalNumbersMenu);
			return;
		}
		number2 = RequestNumber(CheckForNatural, sign2);
		if (number2 == "404%%aa^9*") {
			Again(NaturalNumbersMenu);
			return;
		}

		num1 = StringToNumber(number1, 0, number1.length() - 1);
		num2 = StringToNumber(number2, 0, number2.length() - 1);
		result = ADD_NN_N(number1.length(), number2.length(), lenRes, num1, num2);

		cout << "���������: ";
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(NaturalNumbersMenu);
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
		cout << "������ ������ ��� � ����" << endl;
		Again(NaturalNumbersMenu);
		return;
	}
}