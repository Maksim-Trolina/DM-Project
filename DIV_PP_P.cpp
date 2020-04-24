#include "Modules.h"
Fractions* DIV_PP_P(Fractions pol1[], Fractions pol2[], int lenPol1, int lenPol2, int& lenPolOutput) {
	Fractions* newNumber;
	Fractions* divider;
	Fractions* dividend;
	int lenDivider;
	int lenDividend;

	int nonZeroPos = 0;

	while (pol2[nonZeroPos].numerator[0] == 0) {
		nonZeroPos++;
	}
	lenDivider = lenPol2 - nonZeroPos;
	divider = new Fractions[lenDivider];
	for (int i = 0; i < lenDivider; ++i) {
		divider[i] = pol2[i + nonZeroPos];
	}

	nonZeroPos = 0;
	while (pol1[nonZeroPos].numerator[0] == 0) {
		nonZeroPos++;
	}
	lenDividend = lenPol1 - nonZeroPos;
	dividend = new Fractions[lenDividend];
	for (int i = 0; i < lenDividend; ++i) {
		dividend[i] = pol1[i + nonZeroPos];
	}

	if (lenDividend < lenDivider) {
		lenPolOutput = 1;
		newNumber = new Fractions[lenPolOutput];
		newNumber[0].lenNumerator = 1;
		newNumber[0].lenDenominator = 1;
		newNumber[0].numerator = new int[newNumber[0].lenNumerator];
		newNumber[0].denominator = new int[newNumber[0].lenDenominator];
		newNumber[0].numerator[0] = 0;
		newNumber[0].denominator[0] = 1;
		newNumber[0].sign = 0;
		return newNumber;
	}

	lenPolOutput = lenDividend - lenDivider + 1;
	newNumber = new Fractions[lenPolOutput];
	Fractions* prom;
	int lenProm = lenDivider;
	Fractions* promt;
	int lenPromt;
	Fractions x;
	int i = 0;
	int k = lenDividend;
	while (k >= lenDivider) {
			x = DIV_QQ_Q(dividend[i], divider[0]);
			newNumber[i] = x;
			prom = MUL_PQ_P(divider, x, lenProm);
			promt = MUL_Pxk_P(prom, lenProm, k - lenDivider, lenPromt);
			dividend = SUB_PP_P(dividend, promt, lenDividend, lenPromt, lenDividend);
		i++;
		k--;
	}

	nonZeroPos = 0;
	while (newNumber[nonZeroPos].numerator[0] == 0) {
		nonZeroPos++;
	}
	lenPolOutput = lenPolOutput - nonZeroPos;
	Fractions* result = new Fractions[lenPolOutput];
	for (int i = 0; i < lenPolOutput; ++i) {
		result[i] = newNumber[i + nonZeroPos];
	}
	return result;
}