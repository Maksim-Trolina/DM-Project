#include <iostream>
#include "Modules.h"

using namespace std;

void NaturalNumbersMenu() {

	cout << "1) The addition of two natural" << endl;
	cout << "2) Subtraction from one natural second" << endl;
	cout << "3) Multiplication of natural" << endl;
	cout << "4) Division of greater natural into lesser or equal" << endl;
	cout << "5) The remainder of dividing a greater natural by a lesser or equal" << endl;
	cout << "6) GCF of naturals" << endl;
	cout << "7) LCM of naturals" << endl;
	cout << "8) Back" << endl;
	cout << "Enter section number" << endl;

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
		cout << "Wrong choice" << endl;
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

		cout << "Result: ";
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(NaturalNumbersMenu);
		return;
	case '2':
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
		Fractions n1;
		Fractions n2;
		Fractions res;
		n1.numerator = num1;
		n1.lenNumerator = number1.length();
		n1.sign = 0;
		n2.numerator = num2;
		n2.lenNumerator = number2.length();
		n2.sign = 0;
		res = SUB_ZZ_Z(n1, n2);

		cout << "Result: ";
		if (res.sign == 1) {

			cout << "-";
		}
		for (int i = 0; i < res.lenNumerator; i++) {
			cout << res.numerator[i];
		}
		cout << endl;
		Again(NaturalNumbersMenu);
		return;
	case '3':
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

		result = MUL_NN_N(number1.length(), number2.length(), lenRes, num1, num2);
		cout << "Result: ";
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(NaturalNumbersMenu);
		return;
	case '4':
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

		result = DIV_NN_N(number1.length(), number2.length(), lenRes, num1, num2);
		cout << "Result: ";
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(NaturalNumbersMenu);
		return;
	case '5':
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

		result = MOD_NN_N(number1.length(), number2.length(), lenRes, num1, num2);
		cout << "Result: ";
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(NaturalNumbersMenu);
		return;
	case '6':
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

		result = GCF_NN_N(number1.length(), number2.length(), lenRes, num1, num2);
		cout << "Result: ";
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(NaturalNumbersMenu);
		return;
	case '7':
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

		result = LCM_NN_N(number1.length(), number2.length(), lenRes, num1, num2);
		cout << "Result: ";
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(NaturalNumbersMenu);
		return;
	case '8':
		system("cls");
		StartMenu();
		return;
	default:
		cout << "Wrong choice" << endl;
		Again(NaturalNumbersMenu);
		return;
	}
}