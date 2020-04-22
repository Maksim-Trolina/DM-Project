#include "Modules.h"

Fractions* MUL_PP_P(Fractions* pol1, Fractions* pol2, int lenPol1, int lenPol2, int& lenPolOutput) {

	lenPolOutput = lenPol1 + lenPol2 - 1;
	Fractions* newPol = new Fractions[lenPolOutput];

	int lenBigPol;
	int lenLessPol;

	if (lenPol1 < lenPol2) {
		lenBigPol = lenPol2;
		lenLessPol = lenPol1;
	}
	else {
		lenBigPol = lenPol1;
		lenLessPol = lenPol2;
	}

	Fractions* bigPol = new Fractions[lenBigPol];
	Fractions* lessPol = new Fractions[lenLessPol];


	if (lenPol1 < lenPol2) {
		for (int i = 0; i < lenBigPol; ++i) {
			bigPol[i] = pol2[i];
		}

		for (int i = 0; i < lenLessPol; ++i) {
			lessPol[i] = pol1[i];
		}
	}
	else {
		for (int i = 0; i < lenBigPol; ++i) {
			bigPol[i] = pol1[i];
		}

		for (int i = 0; i < lenLessPol; ++i) {
			lessPol[i] = pol2[i];
		}
	}

	Fractions nul;
	nul.sign = 0;
	nul.lenNumerator = 1;
	nul.lenDenominator = 1;
	nul.numerator = new int[nul.lenNumerator];
	nul.denominator = new int[nul.lenDenominator];
	nul.numerator[0] = 0;
	nul.denominator[0] = 1;

	for (int i = 0; i < lenPolOutput; ++i) {
		newPol[i] = nul;
	}

	for (int i = 0; i < lenLessPol; ++i) {
		Fractions* monMulPol;
		int lenMonMulPol;

		monMulPol = MUL_Pxk_P(bigPol, lenBigPol, lenLessPol - i - 1, lenMonMulPol);		
		monMulPol = MUL_PQ_P(monMulPol, lessPol[i], lenMonMulPol);
		newPol = ADD_PP_P(newPol, monMulPol, lenPolOutput, lenMonMulPol, lenPolOutput);
	}
	
	for (int i = 0; i < lenPolOutput; ++i) {
		RED_Q_Q(newPol[i].lenNumerator, newPol[i].lenDenominator, newPol[i].lenNumerator, newPol[i].lenDenominator, newPol[i].numerator, newPol[i].denominator, newPol[i].numerator, newPol[i].denominator);
	}

	return newPol;
}