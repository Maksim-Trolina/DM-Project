#include <iostream>
#include "Modules.h"

using namespace std;

void IntegerNumberMenu() {

	cout << "1) Addition of two integers" << endl;
	cout << "2) Subtraction of integers" << endl;
	cout << "3) Multiplication of integers" << endl;
	cout << "4) Division of an integer by an integer" << endl;
	cout << "5) The remainder of dividing a non-negative integer by a natural number" << endl;
	cout << "6) Back" << endl;
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
	int signRes = 0;
	int start = 0;
	int flag1 = 0;
	int flag2 = 0;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		cout << "Wrong choice" << endl;
		Again(IntegerNumberMenu);
		return;
	}

	switch (menuItem[0])
	{
	case '1':
		system("cls");
		number1 = RequestNumber(CheckForInteger, sign1);
		if (number1 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		number2 = RequestNumber(CheckForInteger, sign2);
		if (number2 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		if (sign1 == 1) {
			flag1++;
			start++;
		}
		num1 = StringToNumber(number1, start, number1.length() - 1);
		start = 0;
		if (sign2 == 1) {
			start++;
			flag2++;
		}
		num2 = StringToNumber(number2, start, number2.length() - 1);

		result = ADD_ZZ_Z((int)number1.length()-flag1, (int)number2.length()-flag2, lenRes, sign1, sign2, signRes, num1, num2);
		cout << "Result: ";
		if (signRes == 1) {
			cout << "-";
		}
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(IntegerNumberMenu);
		return;
	case '2':
		system("cls");
		Fractions n1;
		Fractions n2;
		Fractions res;
		number1 = RequestNumber(CheckForInteger, sign1);
		if (number1 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		number2 = RequestNumber(CheckForInteger, sign2);
		if (number2 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		if (sign1 == 1) {
			flag1++;
			start++;
		}
		n1.numerator = StringToNumber(number1, start, number1.length() - 1);
		start = 0;
		if (sign2 == 1) {
			start++;
			flag2++;
		}
		n2.numerator = StringToNumber(number2, start, number2.length() - 1);
		n1.lenNumerator = (int)number1.length() - flag1;
		n2.lenNumerator = (int)number2.length() - flag2;
		n1.sign = sign1;
		n2.sign = sign2;
		res = SUB_ZZ_Z(n1,n2);
		cout << "Result: ";
		if (res.sign == 1) {
			cout << "-";
		}
		for (int i = 0; i < res.lenNumerator; i++) {
			cout << res.numerator[i];
		}
		cout << endl;
		Again(IntegerNumberMenu);
		return;
	case '3':
		system("cls");
		number1 = RequestNumber(CheckForInteger, sign1);
		if (number1 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		number2 = RequestNumber(CheckForInteger, sign2);
		if (number2 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		if (sign1 == 1) {
			flag1++;
			start++;
		}
		num1 = StringToNumber(number1, start, number1.length() - 1);
		start = 0;
		if (sign2 == 1) {
			start++;
			flag2++;
		}
		num2 = StringToNumber(number2, start, number2.length() - 1);

		result = MUL_ZZ_Z((int)number1.length() - flag1, (int)number2.length() - flag2, lenRes, sign1, sign2, signRes, num1, num2);
		cout << "Result: ";
		if (signRes == 1) {
			cout << "-";
		}
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(IntegerNumberMenu);
		return;
	case '4':
		system("cls");
		number1 = RequestNumber(CheckForInteger, sign1);
		if (number1 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		number2 = RequestNumber(CheckForInteger, sign2);
		if (number2 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		if (sign1 == 1) {
			flag1++;
			start++;
		}
		num1 = StringToNumber(number1, start, number1.length() - 1);
		start = 0;
		if (sign2 == 1) {
			start++;
			flag2++;
		}
		num2 = StringToNumber(number2, start, number2.length() - 1);

		if (num2[0] == 0) {
			Again(IntegerNumberMenu);
			return;
		}

		result = DIV_ZZ_Z((int)number1.length() - flag1, (int)number2.length() - flag2, lenRes, sign1, sign2, signRes, num1, num2);
		cout << "Result: ";
		if (signRes == 1) {
			cout << "-";
		}
		for (int i = 0; i < lenRes; i++) {
			cout << result[i];
		}
		cout << endl;
		Again(IntegerNumberMenu);
		return;
	case '5':
		system("cls");
		number1 = RequestNumber(CheckForInteger, sign1);
		if (number1 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}

		if (sign1 == 1) {
			Again(IntegerNumberMenu);
			return;
		}

		number2 = RequestNumber(CheckForInteger, sign2);
		if (number2 == "404%%aa^9*") {
			Again(IntegerNumberMenu);
			return;
		}
		
		if (sign1 == 1) {
			flag1++;
			start++;
		}
		num1 = StringToNumber(number1, start, number1.length() - 1);
		n1.numerator = num1;
		start = 0;
		if (sign2 == 1) {
			start++;
			flag2++;
		}
		num2 = StringToNumber(number2, start, number2.length() - 1);

		if (num2[0] == 0 || sign2==1) {
			Again(IntegerNumberMenu);
			return;
		}

		n2.numerator = num2;
		n1.lenNumerator = (int)number1.length() - flag1;
		n2.lenNumerator = (int)number2.length() - flag2;
		n1.sign = sign1;
		n2.sign = sign2;
		res = MOD_ZZ_Z(n1,n2);
		cout << "Result: ";
		if (res.sign == 1 || sign1 == 1) {
			cout << "-";
		}
		for (int i = 0; i < res.lenNumerator; i++) {
			cout << res.numerator[i];
		}
		cout << endl;
		Again(IntegerNumberMenu);
		return;
	case '6':
		system("cls");
		StartMenu();
		return;
	default:
		cout << "Wrong choice" << endl;
		Again(IntegerNumberMenu);
		return;
	}

}