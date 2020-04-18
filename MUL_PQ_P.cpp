#include "Modules.h"

Fractions* MUL_PQ_P(Fractions* pol, Fractions coef, int degPolinom) {

	Fractions* newPol = new Fractions[degPolinom];

	for (int i = 0; i < degPolinom; i++) {
		newPol[i] = MUL_QQ_Q(pol[i], coef);
	}
	return newPol;
}