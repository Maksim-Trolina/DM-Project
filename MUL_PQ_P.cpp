#include "Modules.h"

Fractions* MUL_PQ_P(Fractions* pol, Fractions coef, int degPolinom) {

	Fractions* newPol = new Fractions[degPolinom + 1];

	for (int i = 0; i < degPolinom + 1; ++i) {
		newPol[i] = MUL_QQ_Q(pol[i], coef);
	}
	return newPol;
}