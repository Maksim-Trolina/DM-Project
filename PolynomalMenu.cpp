#include "Modules.h"
#include <iostream>
#include <string>

using namespace std;

void PolynomalMenu() {
	
	cout << "1)Сложение многочленов" << endl;
	cout << "2)Вычитание многочленов" << endl;
	cout << "3)Умножение многочлена на рациональное число" << endl;
	cout << "4)Умножение многочленов" << endl;
	cout << "5)Частное от деления одного многочлена на другой" << endl;
	cout << "6)Остаток от деления одного многочлена на другой" << endl;
	cout << "7)НОД многочленов" << endl;
	cout << "8)Вынесение из многочлена НОК знаменателей коэффициентов и НОД числителей" << endl;
	cout << "9)Производная многочлена" << endl;
	cout << "10)Преобразование многочлена - кратные корни в простые" << endl;
	cout << "11)Вернуться назад" << endl;
	cout << "Чтобы выбрать интересующий вас пункт,необходимо ввести его номер" << endl;

	string menuItem;
	string context;
	Fractions* pol1;
	Fractions* pol2;
	Fractions* res;
	Fractions n1;
	int len1, len2, lenRes;
	int start = 1;
	int end = 0;
	int col = 0;
	cin >> menuItem;

	if (menuItem.length() < 1 || menuItem.length() > 2) {

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
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		res = ADD_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Результат: ";
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
		system("cls");
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		res = SUB_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Результат: ";
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
	case '3':
		system("cls");
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		context = RequestNumber(CheckForRational, n1.sign);
		if (context == "404%%aa^9*") {
			Again(PolynomalMenu);
			return;
		}

		if (n1.sign == 1) {
			start++;
		}
		while (context[end] != '/') {
			end++;
		}
		n1.numerator = StringToNumber(context, start, end - 1);
		n1.lenNumerator = end - start;
		n1.denominator = StringToNumber(context, end + 1, (int)context.length() - 2);
		n1.lenDenominator = (int)context.length() - end - 2;

		res = MUL_PQ_P(pol1, n1,len1);
		
		cout << "Результат: ";
		for (int i = 0; i < len1; i++) {
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
			cout << len1 - i - 1;
			cout << " ";
		}
		cout << endl;
		Again(PolynomalMenu);
		return;
	case '4':
		system("cls");
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		res = MUL_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Результат: ";
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
	case '5':
		system("cls");
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		col = 0;
		for (int i = 0; i < len2; i++) {
			if (pol2[i].numerator[0] == 0) {
				col++;
			}
		}
		if (col == len2) {
			cout << "Введено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}
		res = DIV_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Результат: ";
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
	case '6':
		system("cls");
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		col = 0;
		for (int i = 0; i < len2; i++) {
			if (pol2[i].numerator[0] == 0) {
				col++;
			}
		}
		if (col == len2) {
			cout << "Введено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}
		res = MOD_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Результат: ";
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
	case '7':
		return;
	case '8':
		system("cls");
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		res = FAC_P_Q(pol1, len1);
		cout << "Результат: ";
		for (int i = 0; i < len1; i++) {
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
			cout << len1 - i - 1;
			cout << " ";
		}
		cout << endl;
		Again(PolynomalMenu);
		return;
	case '9':
		system("cls");
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите полином: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		res = DER_P_P(pol1, len1, lenRes);
		cout << "Результат: ";
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
	default:
		Again(PolynomalMenu);
		return;
	}

}