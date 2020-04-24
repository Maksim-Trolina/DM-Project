#include "Modules.h"
#include <iostream>
#include <string>

using namespace std;

void PolynomalMenu() {
	
	cout << "1) Polynomial addition" << endl;
	cout << "2) Subtraction of polynomials" << endl;
	cout << "3) Rational multiplication" << endl;
	cout << "4) Polynomial multiplication" << endl;
	cout << "5) Quotient from polynomial division" << endl;
	cout << "6) Remainder of polynomial division" << endl;
	cout << "7) Greatest Common Divisor of Polynomials" << endl;
	cout << "8) Removal of denominators of coefficients and LCM of numerators from the polynomial GCF" << endl;
	cout << "9) Derivative" << endl;
	cout << "10) Multiple roots to simple" << endl;
	cout << "11) Back" << endl;
	cout << "Enter section number" << endl;

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
		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		res = ADD_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Result: ";
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
		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		res = SUB_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Result: ";
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
		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
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
		
		cout << "Result: ";
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
		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		res = MUL_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Result: ";
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
		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		getline(cin, context);
		pol2 = RequestNumbers(context, len2);
		col = 0;
		for (int i = 0; i < len2; i++) {
			if (pol2[i].numerator[0] == 0) {
				col++;
			}
		}
		if (col == len2) {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}
		res = DIV_PP_P(pol1, pol2, len1, len2, lenRes);
		cout << "Result: ";
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
		return;
	case '7':
		return;
	case '8':
		system("cls");
		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		res = FAC_P_Q(pol1, len1);
		cout << "Result: ";
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
		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter polynomial: ";
		cin.clear();
		while (cin.get() != '\n') {
			cin.get();
		}
		getline(cin, context);

		pol1 = RequestNumbers(context, len1);

		res = DER_P_P(pol1, len1, lenRes);
		cout << "Result: ";
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