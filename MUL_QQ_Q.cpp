#include "Modules.h"

Fractions MUL_QQ_Q(Fractions frac1, Fractions frac2) {
	Fractions newFrac;
	newFrac.numerator = MUL_ZZ_Z(frac1.lenNumerator, frac2.lenNumerator, newFrac.lenNumerator, frac1.sign, frac2.sign, newFrac.sign, frac1.numerator, frac2.numerator);
	newFrac.denominator = MUL_NN_N(frac1.lenDenominator, frac2.lenDenominator, newFrac.lenDenominator, frac1.denominator, frac2.denominator);
	return newFrac;
}