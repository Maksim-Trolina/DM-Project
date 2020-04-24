#include "Modules.h"

Fractions* SUB_PP_P(Fractions pol1[], Fractions pol2[], int lenPol1, int lenPol2, int& lenPolOutput) {
	Fractions* negPol2 = new Fractions[lenPol2];
	for (int i = 0; i < lenPol2; ++i) {
		negPol2[i] = pol2[i];
		negPol2[i].sign = 1 - pol2[i].sign;
	}

	return ADD_PP_P(pol1, negPol2, lenPol1, lenPol2, lenPolOutput);

}