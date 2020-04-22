#include "Modules.h"

Fractions* MUL_Pxk_P(Fractions* polinom, int lenPol, int k, int& lenPolOutput) {
	lenPolOutput = lenPol + k;
	Fractions* newNumber = new Fractions[lenPolOutput];

	for (int i = 0; i < lenPol; ++i) {
		newNumber[i] = polinom[i];
	}

	for (int i = lenPol; i < lenPolOutput; ++i) {
		newNumber[i].lenNumerator = 1;
		newNumber[i].lenDenominator = 1;
		newNumber[i].sign = 0;
		newNumber[i].numerator = new int[newNumber[i].lenNumerator];
		newNumber[i].denominator = new int[newNumber[i].lenDenominator];
		newNumber[i].numerator[0] = 0;
		newNumber[i].denominator[0] = 1;
	}

	return newNumber;
}