#include "Modules.h"
#include <iostream>

using namespace std;

void PolynomialReading(Fractions nums[],int lenNums) {

	for (int i = 0; i < lenNums; i++) {

		cout << nums[i].sign << endl;

		for (int j = 0; j < nums[i].lenNumerator; j++) {
			cout << nums[i].numerator[j];
		}
		cout << endl;

		for (int j = 0; j < nums[i].lenDenominator; j++) {
			cout << nums[i].denominator[j];
		}
		cout << endl;
	}
}