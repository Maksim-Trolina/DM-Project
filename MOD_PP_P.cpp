#include "Modules.h"

Fractions* MOD_PP_P(Fractions pol1[], Fractions pol2[], int lenPol1, int lenPol2, int& lenPolOutput) {
	int lenDiv = 0;
	Fractions* div = DIV_PP_P(pol1, pol2, lenPol1, lenPol2, lenDiv);
	int lenMulDiv = 0;
	Fractions* mulDiv = MUL_PP_P(div, pol2, lenDiv, lenPol2, lenMulDiv);
	Fractions* newNumber = SUB_PP_P(pol1, mulDiv, lenPol1, lenMulDiv, lenPolOutput);
	return newNumber;
}