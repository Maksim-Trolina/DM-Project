#include "Modules.h"
#include <iostream>

using namespace std;

void Again(void (function)()) {
	cout << "Такого пункта нет в меню" << endl;
	system("pause");
	system("cls");
	function();
}