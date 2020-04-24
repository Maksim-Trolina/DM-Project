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
		cout << "„тобы вернутьс€ назад введите 'back' без кавычек" << endl;
		cout << "¬ведите число: ";
		cin >> number;
		if (!check(number,sign)) {

			if (number == "back") {

				return "404%%aa^9*";
			}
			cout << "¬ведено не то что ожидалось" << endl;
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
			
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}
		start++;
		if (start == context.length()) {
			cout << "¬ведено не то что ожидалось" << endl;
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
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}

		result[current].lenNumerator = currenDigit;
		if (start == context.length()) {
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}

		if (context[start] != '/') {
			cout << "¬ведено не то что ожидалось" << endl;
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
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}
		result[current].lenDenominator = currenDigit;
		currenDigit = 0;

		if (result[current].denominator[0] == 0) {
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}

		if (start == context.length()) {
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}

		if (context[start] != ')') {
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}
		start++;
		if (start == context.length()) {
			break;
		}
		if (context[start] != ' ') {
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}
		start++;
		if (start == context.length()) {
			cout << "¬ведено не то что ожидалось" << endl;
			Again(PolynomalMenu);
		}

		current++;
	}

	return result;
}


