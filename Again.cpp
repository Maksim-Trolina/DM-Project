#include "Modules.h"
#include <iostream>

using namespace std;

void Again(void (function)()) {
	cout << "������ ������ ��� � ����" << endl;
	system("pause");
	system("cls");
	function();
}