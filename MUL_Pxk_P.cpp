#include "Modules.h"

Fractions* MUL_Pxk_P(Fractions* polinom, int degPol, int k, int& degPolOutput) {
	degPolOutput = degPol + k;
	Fractions* newNumber = new Fractions[degPolOutput + 1];

	for (int i = 0; i < degPol + 1; ++i) {
		newNumber[i] = polinom[i];
	}

	for (int i = degPol + 1; i < degPolOutput + 1; ++i) {
		newNumber[i].lenNumerator = 1;
		newNumber[i].lenDenominator = 1;
		newNumber[i].sign = 0;
		newNumber[i].numerator = new int[newNumber[i].lenNumerator];
		newNumber[i].denominator = new int[newNumber[i].lenDenominator];
		newNumber[i].numerator[0] = 0;
		newNumber[i].denominator[0] = 0;
	}

	return newNumber;
}