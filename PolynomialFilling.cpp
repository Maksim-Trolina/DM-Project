#include "Modules.h"
#include <iostream>

using namespace std;

Fractions* PolynomialFilling(int lenPolinom) {
	
	Fractions* result = new Fractions[lenPolinom];

	for (int i = 0; i < lenPolinom; i++) {
		
		cin >> result[i].sign;
		
		cin >> result[i].lenNumerator;

		result[i].numerator = new int[result[i].lenNumerator];

		for (int j = 0; j < result[i].lenNumerator; j++) {
			
			cin >> result[i].numerator[j];
		}

		cin >> result[i].lenDenominator;

		result[i].denominator = new int[result[i].lenDenominator];

		for (int j = 0; j < result[i].lenDenominator; j++) {

			cin >> result[i].denominator[j];
		}
	}

	return result;
}