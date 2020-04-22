#include <iostream>
#include "Modules.h"

using namespace std;

void RationalNumberMenu() {
	cout << "1)Сократить дробь" << endl;
	cout << "2)Сложение дробей" << endl;
	cout << "3)Вычитание дробей" << endl;
	cout << "4)Умножение дробей" << endl;
	cout << "5)Деление дробей" << endl;
	cout << "6)Вернуться назад" << endl;
	cout << "Чтобы выбрать интересующий вас пункт,необходимо ввести его номер" << endl;

	string menuItem;
	string number1;
	string number2;
	Fractions n1;
	Fractions n2;
	Fractions res;
	int start = 1;
	int end = 0;
	cin >> menuItem;

	if (menuItem.length() != 1) {
		cout << "Такого пункта нет в меню" << endl;
		Again(RationalNumberMenu);
		return;
	}

	switch (menuItem[0])
	{
	case '1':
		system("cls");
		number1 = RequestNumber(CheckForRational, n1.sign);
		if (number1 == "404%%aa^9*") {
			Again(RationalNumberMenu);
			return;
		}
		if (n1.sign == 1) {
			start++;
		}
		while (number1[end] != '/') 
		{
			end++;
		}
		n1.numerator = StringToNumber(number1, start, end - 1);
		n1.lenNumerator = end - start;
		n1.denominator = StringToNumber(number1, end + 1, (int)number1.length() - 2);
		n1.lenDenominator = (int)number1.length() - end - 2;

		res.sign = n1.sign;
		res.lenNumerator = n1.lenNumerator;
		res.lenDenominator = n1.lenDenominator;
		res.numerator = new int[res.lenNumerator];
		res.denominator = new int[res.lenDenominator];
		RED_Q_Q(n1.lenNumerator, n1.lenDenominator, res.lenNumerator, res.lenDenominator, n1.numerator, n1.denominator, res.numerator, res.denominator);

		cout << "Результат: (";
		if (res.sign == 1) {
			cout << "-";
		}
		for (int i = 0; i < res.lenNumerator; i++) {
			cout << res.numerator[i];
		}
		cout << "/";
		for (int i = 0; i < res.lenDenominator; i++) {
			cout << res.denominator[i];
		}
		cout << ")" << endl;
		Again(RationalNumberMenu);

		return;
	case '2':
		system("cls");
		number1 = RequestNumber(CheckForRational, n1.sign);
		if (number1 == "404%%aa^9*") {
			Again(RationalNumberMenu);
			return;
		}
		number2 = RequestNumber(CheckForRational, n2.sign);
		if (number2 == "404%%aa^9*") {
			Again(RationalNumberMenu);
			return;
		}
		if (n1.sign == 1) {
			start++;
		}
		while (number1[end] != '/') {
			end++;
		}
		n1.numerator = StringToNumber(number1, start, end - 1);
		n1.lenNumerator = end - start;
		n1.denominator = StringToNumber(number1, end + 1, (int)number1.length() - 2);
		n1.lenDenominator = (int)number1.length() - end-2;

		start = 1;
		end = 0;
		if (n2.sign == 1) {
			start++;
		}
		while (number2[end] != '/') {
			end++;
		}
		n2.numerator = StringToNumber(number2, start, end - 1);
		n2.lenNumerator = end - start;
		n2.denominator = StringToNumber(number2, end + 1, (int)number2.length() - 2);
		n2.lenDenominator = (int)number2.length() - end-2;

		res = ADD_QQ_Q(n1, n2);
		cout << "Результат: (";
		if (res.sign == 1) {
			cout << "-";
		}
		for (int i = 0; i < res.lenNumerator; i++) {
			cout << res.numerator[i];
		}
		cout << "/";
		for (int i = 0; i < res.lenDenominator; i++) {
			cout << res.denominator[i];
		}
		cout << ")" << endl;
		Again(RationalNumberMenu);
		return;
	case '3':
		return;
	case '4':
		system("cls");
		number1 = RequestNumber(CheckForRational, n1.sign);
		if (number1 == "404%%aa^9*") {
			Again(RationalNumberMenu);
			return;
		}
		number2 = RequestNumber(CheckForRational, n2.sign);
		if (number2 == "404%%aa^9*") {
			Again(RationalNumberMenu);
			return;
		}
		if (n1.sign == 1) {
			start++;
		}
		while (number1[end] != '/') {
			end++;
		}
		n1.numerator = StringToNumber(number1, start, end - 1);
		n1.lenNumerator = end - start;
		n1.denominator = StringToNumber(number1, end + 1, (int)number1.length() - 2);
		n1.lenDenominator = (int)number1.length() - end - 2;

		start = 1;
		end = 0;
		if (n2.sign == 1) {
			start++;
		}
		while (number2[end] != '/') {
			end++;
		}
		n2.numerator = StringToNumber(number2, start, end - 1);
		n2.lenNumerator = end - start;
		n2.denominator = StringToNumber(number2, end + 1, (int)number2.length() - 2);
		n2.lenDenominator = (int)number2.length() - end - 2;

		res = MUL_QQ_Q(n1, n2);
		cout << "Результат: (";
		if (res.sign == 1) {
			cout << "-";
		}
		for (int i = 0; i < res.lenNumerator; i++) {
			cout << res.numerator[i];
		}
		cout << "/";
		for (int i = 0; i < res.lenDenominator; i++) {
			cout << res.denominator[i];
		}
		cout << ")" << endl;
		Again(RationalNumberMenu);
		return;
	case '5':
		system("cls");
		number1 = RequestNumber(CheckForRational, n1.sign);
		if (number1 == "404%%aa^9*") {
			Again(RationalNumberMenu);
			return;
		}
		number2 = RequestNumber(CheckForRational, n2.sign);
		if (number2 == "404%%aa^9*") {
			Again(RationalNumberMenu);
			return;
		}
		if (n1.sign == 1) {
			start++;
		}
		while (number1[end] != '/') {
			end++;
		}
		n1.numerator = StringToNumber(number1, start, end - 1);
		n1.lenNumerator = end - start;
		n1.denominator = StringToNumber(number1, end + 1, (int)number1.length() - 2);
		n1.lenDenominator = (int)number1.length() - end - 2;

		start = 1;
		end = 0;
		if (n2.sign == 1) {
			start++;
		}
		while (number2[end] != '/') {
			end++;
		}
		n2.numerator = StringToNumber(number2, start, end - 1);
		if (n2.numerator[0] == 0) {
			Again(RationalNumberMenu);
			return;
		}
		n2.lenNumerator = end - start;
		n2.denominator = StringToNumber(number2, end + 1, (int)number2.length() - 2);
		n2.lenDenominator = (int)number2.length() - end - 2;

		res = DIV_QQ_Q(n1, n2);
		cout << "Результат: (";
		if (res.sign == 1) {
			cout << "-";
		}
		for (int i = 0; i < res.lenNumerator; i++) {
			cout << res.numerator[i];
		}
		cout << "/";
		for (int i = 0; i < res.lenDenominator; i++) {
			cout << res.denominator[i];
		}
		cout << ")" << endl;
		Again(RationalNumberMenu);
		return;
	case '6':
		system("cls");
		StartMenu();
		return;
	default:
		cout << "Такого пункта нет в меню" << endl;
		Again(RationalNumberMenu);
		return;
	}

}