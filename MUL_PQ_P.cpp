#include "Modules.h"

Fractions* MUL_PQ_P(Fractions* pol, Fractions coef, int lenPolinom) {

	Fractions* newPol = new Fractions[lenPolinom];

	for (int i = 0; i < lenPolinom; i++) {
		newPol[i] = MUL_QQ_Q(pol[i], coef);
	}
	return newPol;
}