#include "Modules.h"
#include <iostream>

Fractions* FAC_P_Q(Fractions* polinom, int lenPolinom) {
	Fractions* newPol = new Fractions[lenPolinom];

	if (lenPolinom == 1) {
		newPol[0].lenNumerator = 1;
		newPol[0].lenDenominator = 1;
		newPol[0].sign = 0;
		newPol[0].numerator = new int[newPol[0].lenNumerator];
		newPol[0].denominator = new int[newPol[0].lenDenominator];
		if (polinom[0].numerator[0] == 0) {
			newPol[0].numerator[0] = 0;
		}
		else newPol[0].numerator[0] = 1;
		newPol[0].denominator[0] = 1;
		return newPol;
	}

	for (int i = 0; i < lenPolinom; ++i) {
		if (polinom[i].numerator[0] == 0) {
			polinom[i].lenDenominator = 1;
			polinom[i].denominator = new int[polinom[i].lenDenominator];
			polinom[i].denominator[0] = 1;
		}
	}

	int* gcfNumerator = polinom[0].numerator;
	int lenGcfNumerator = polinom[0].lenNumerator;
	int* lcmDenominator = polinom[0].denominator;
	int lenLcmDenominator = polinom[0].lenDenominator;

	for (int i = 1; i < lenPolinom; ++i) {
		gcfNumerator = GCF_NN_N(lenGcfNumerator, polinom[i].lenNumerator, lenGcfNumerator, gcfNumerator, polinom[i].numerator);
		lcmDenominator = LCM_NN_N(lenLcmDenominator, polinom[i].lenDenominator, lenLcmDenominator, lcmDenominator, polinom[i].denominator);
	}

	for (int i = 0; i < lenPolinom; ++i) {
		int lenFirstDiv = 0;
		int* firstDiv = DIV_NN_N(polinom[i].lenNumerator, lenGcfNumerator, lenFirstDiv, polinom[i].numerator, gcfNumerator);
		int lenSecDiv = 0;
		int* secDiv = DIV_NN_N(lenLcmDenominator, polinom[i].lenDenominator, lenSecDiv, lcmDenominator, polinom[i].denominator);
		newPol[i].numerator = MUL_ZZ_Z(lenFirstDiv, lenSecDiv, newPol[i].lenNumerator, polinom[i].sign, 0, newPol[i].sign, firstDiv, secDiv);
		newPol[i].lenDenominator = 1;
		newPol[i].denominator = new int[newPol[i].lenDenominator];
		newPol[i].denominator[0] = 1;
	}

	return newPol;
}