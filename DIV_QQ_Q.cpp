#include "Modules.h"
Fractions DIV_QQ_Q(Fractions frac1, Fractions frac2) {
	Fractions newFrac;
	newFrac.numerator = MUL_ZZ_Z(frac1.lenNumerator, frac2.lenDenominator, newFrac.lenNumerator, frac1.sign, frac2.sign, newFrac.sign, frac1.numerator, frac2.denominator);
	newFrac.denominator = MUL_NN_N(frac1.lenDenominator, frac2.lenNumerator, newFrac.lenDenominator, frac1.denominator, frac2.numerator);
	RED_Q_Q(newFrac.lenNumerator, newFrac.lenDenominator, newFrac.lenNumerator, newFrac.lenDenominator, newFrac.numerator, newFrac.denominator, newFrac.numerator, newFrac.denominator);
	return newFrac;
}
