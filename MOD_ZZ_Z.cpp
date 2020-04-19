#include "Modules.h"

Fractions MOD_ZZ_Z(Fractions num1, Fractions num2) {

	Fractions result;
	result.sign = 0;
	result.numerator = MOD_NN_N(num1.lenNumerator, num2.lenNumerator, result.lenNumerator, num1.numerator, num2.numerator);
	return result;
}