#include "Modules.h"

Fractions SUB_ZZ_Z(Fractions number1, Fractions number2) {

	Fractions res;

	if (number1.sign == 0 && number2.sign == 1) {
		res.sign = 0;
		res.numerator = ADD_NN_N(number1.lenNumerator, number2.lenNumerator, res.lenNumerator, number1.numerator, number2.numerator);
		return res;
	}
	if (number1.sign == 1 && number2.sign == 0) {
		res.sign = 1;
		res.numerator = ADD_NN_N(number1.lenNumerator, number2.lenNumerator, res.lenNumerator, number1.numerator, number2.numerator);
		return res;
	}
	if (number1.sign == 1 && number2.sign == 1) {
		if (COM_NN_D(number1.lenNumerator, number2.lenNumerator, number1.numerator, number2.numerator) != 1) {
			res.sign = 1;
			res.numerator = SUB_NN_N(number1.lenNumerator, number2.lenNumerator, res.lenNumerator, number1.numerator, number2.numerator);
		}
		else {
			res.sign = 0;
			res.numerator = SUB_NN_N(number2.lenNumerator, number1.lenNumerator, res.lenNumerator, number2.numerator, number1.numerator);
		}
		return res;
	}
	
	if (COM_NN_D(number1.lenNumerator, number2.lenNumerator, number1.numerator, number2.numerator) != 1) {
		res.sign = 0;
		res.numerator = SUB_NN_N(number1.lenNumerator, number2.lenNumerator, res.lenNumerator, number1.numerator, number2.numerator);
	}
	else {
		res.sign = 1;
		res.numerator = SUB_NN_N(number2.lenNumerator, number1.lenNumerator, res.lenNumerator, number2.numerator, number1.numerator);
	}
	return res;
}