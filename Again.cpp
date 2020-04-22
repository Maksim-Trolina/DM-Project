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
		cout << "Чтобы вернуться назад введите 'back' без кавычек" << endl;
		cout << "Введите число: ";
		cin >> number;
		if (!check(number,sign)) {

			if (number == "back") {

				return "404%%aa^9*";
			}
			cout << "Введено не то что ожидалось" << endl;
			continue;
		}
		return number;
	}

}


