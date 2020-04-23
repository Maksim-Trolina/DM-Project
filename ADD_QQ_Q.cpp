#include "Modules.h"


Fractions ADD_QQ_Q(Fractions num1,Fractions num2) 
{
	Fractions result;
	int sign;
	int len1;
	int len2;

	result.denominator = MUL_ZZ_Z(num1.lenDenominator, num2.lenDenominator, result.lenDenominator, 0, 0,sign, num1.denominator, num2.denominator);


	int* numerator1 = MUL_ZZ_Z(num1.lenNumerator, num2.lenDenominator, len1, 0, 0, sign, num1.numerator, num2.denominator);

	int* numerator2 = MUL_ZZ_Z(num1.lenDenominator, num2.lenNumerator, len2, 0, 0, sign, num1.denominator, num2.numerator);

	result.numerator = ADD_ZZ_Z(len1, len2, result.lenNumerator, num1.sign, num2.sign, result.sign, numerator1, numerator2);

	RED_Q_Q(result.lenNumerator, result.lenDenominator, result.lenNumerator, result.lenDenominator, result.numerator, result.denominator, result.numerator, result.denominator);
		return result;


}