#include <iostream>
#include "Modules.h"
#include <algorithm>

using namespace std;

int main()
{
	Fractions num1;
	Fractions num2;

	cin >> num1.sign >> num2.sign;
	cin >> num1.lenNumerator >> num2.lenNumerator;

	num1.numerator = new int[num1.lenNumerator];
	num2.numerator = new int[num2.lenNumerator];

	for (int i = 0; i < num1.lenNumerator; i++) {
		cin >> num1.numerator[i];
	}
	for (int i = 0; i < num2.lenNumerator; i++) {
		cin >> num2.numerator[i];
	}
	Fractions res;
	//res.numerator = new int[max(num1.lenNumerator, num2.lenNumerator)];
	res = SUB_ZZ_Z(num1,num2);
	cout << res.sign << endl;

	for (int i = 0; i < res.lenNumerator; i++) {
		cout << res.numerator[i];
	}
	

}
    