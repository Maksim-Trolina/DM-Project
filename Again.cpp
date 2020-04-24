#include "Modules.h"
#include <iostream>

using namespace std;

void Again(void (function)()) {
	system("pause");
	system("cls");
	function();
}

string RequestNumber(bool (check)(string,int&),int& sign) {
	
	string number;

	while (true) {
		cout << "Enter 'back' without quotes to exit" << endl;
		cout << "Enter the number : ";
		cin >> number;
		if (!check(number,sign)) {

			if (number == "back") {

				return "404%%aa^9*";
			}
			cout << "Invalid input" << endl;
			continue;
		}
		return number;
	}

}

Fractions* RequestNumbers(string context,int& lenOutput) {

	int start = 0;
	int len = 0;
	int current = 0;
	int currenDigit = 0;

	if (context == "back") {
		Again(PolynomalMenu);
	}

	for (int i = 0; i < context.length(); i++) {

		if (context[i] == ' ') {
			len++;
		}
	}

	len++;
	lenOutput = len;
	Fractions* result = new Fractions[len];
	
	while (true) {
		result[current].sign = 0;
		if (context[start] != '(') {
			
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}
		start++;
		if (start == context.length()) {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}

		if (context[start] == '-') {
			result[current].sign = 1;
			start++;
		}
		result[current].numerator = new int[1000];
		while(start<context.length() && !(((int)context[start])<48 || ((int)context[start]>57)))
		{
			result[current].numerator[currenDigit] = (context[start] - '0');
			currenDigit++;
			start++;
		}

		if (currenDigit == 0) {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}
			
		result[current].lenNumerator = currenDigit;

		if (result[current].numerator[0] == 0 && result[current].lenNumerator > 1) {
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}

		if (start == context.length()) {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}

		if (context[start] != '/') {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}

		start++;
		currenDigit = 0;
		result[current].denominator = new int[1000];
		while (start < context.length() && !(((int)context[start]) < 48 || ((int)context[start] > 57))) {

			result[current].denominator[currenDigit] = (context[start] - '0');
			currenDigit++;
			start++;
		}
		if (currenDigit == 0) {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}
		result[current].lenDenominator = currenDigit;
		currenDigit = 0;

		if (result[current].denominator[0] == 0) {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}

		if (start == context.length()) {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}

		if (context[start] != ')') {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}
		start++;
		if (start == context.length()) {
			break;
		}
		if (context[start] != ' ') {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}
		start++;
		if (start == context.length()) {
			cout << "Invalid input" << endl;
			Again(PolynomalMenu);
		}

		current++;
	}

	return result;
}


