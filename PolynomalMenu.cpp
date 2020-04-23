#include "Modules.h"
#include <iostream>
#include <string>

using namespace std;

void PolynomalMenu() {
	
	cout << "1)�������� �����������" << endl;
	cout << "2)��������� �����������" << endl;
	cout << "3)��������� ���������� �� ������������ �����" << endl;
	cout << "4)��������� �����������" << endl;
	cout << "5)������� �� ������� ������ ���������� �� ������" << endl;
	cout << "6)������� �� ������� ������ ���������� �� ������" << endl;
	cout << "7)��� �����������" << endl;
	cout << "8)��������� �� ���������� ��� ������������ ������������� � ��� ����������" << endl;
	cout << "9)����������� ����������" << endl;
	cout << "10)�������������� ���������� - ������� ����� � �������" << endl;
	cout << "11)��������� �����" << endl;
	cout << "����� ������� ������������ ��� �����,���������� ������ ��� �����" << endl;

	string menuItem;
	string context;
	Fractions* pol1;
	Fractions* pol2;
	Fractions* res;
	int len1, len2, lenRes;
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
		system("cls");
		cout << "������� �������: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);


		cout << "������� �������: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		res = ADD_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "���������: ";
		for (int i = 0; i < lenRes; i++) {
			cout << "(";
			if (res[i].sign == 1) {
				cout << "-";
			}
			for (int j = 0; j < res[i].lenNumerator; j++) {
				cout << res[i].numerator[j];
			}
			cout << "/";
			for (int j = 0; j < res[i].lenDenominator; j++) {
				cout << res[i].denominator[j];
			}
			cout << ")x^";
			cout << lenRes - i - 1;
			cout << " ";
		}
		cout << endl;
		Again(PolynomalMenu);
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