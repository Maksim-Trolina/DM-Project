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
		cout << "����� ��������� ����� ������� 'back' ��� �������" << endl;
		cout << "������� �����: ";
		cin >> number;
		if (!check(number,sign)) {

			if (number == "back") {

				return "404%%aa^9*";
			}
			cout << "������� �� �� ��� ���������" << endl;
			continue;
		}
		return number;
	}

}


