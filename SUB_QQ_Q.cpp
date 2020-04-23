#include "Modules.h"


Fractions SUB_QQ_Q(Fractions num1, Fractions num2) {

	Fractions result;
	int sign;
	int len1;
	int len2;
	Fractions n1, n2;

	n1.numerator = MUL_ZZ_Z(num1.lenNumerator, num2.lenDenominator, n1.lenNumerator, 0, 0, n1.sign, num1.numerator, num2.denominator);

	n2.numerator = MUL_ZZ_Z(num1.lenDenominator, num2.lenNumerator, n2.lenNumerator, 0, 0, n2.sign, num1.denominator, num2.numerator);

	n1.sign = num1.sign;

	n2.sign = num2.sign;

		result = SUB_ZZ_Z(n1, n2);

	result.denominator = MUL_ZZ_Z(num1.lenDenominator, num2.lenDenominator, result.lenDenominator, 0, 0, sign, num1.denominator, num2.denominator);

	RED_Q_Q(result.lenNumerator, result.lenDenominator, result.lenNumerator, result.lenDenominator, result.numerator, result.denominator, result.numerator, result.denominator);

	return result;

}
	