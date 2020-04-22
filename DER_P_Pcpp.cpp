#include "Modules.h"

Fractions* DER_P_P(Fractions* polinom, int lenPolinom, int& lenPolinomOutput) {
	
	lenPolinomOutput = lenPolinom - 1;

	Fractions* newNumber = new Fractions[lenPolinomOutput];
	Fractions fracDegMonom;

	for (int i = 0; i < lenPolinom; ++i) {
	
		int lenNum = 0;
		int t = lenPolinom - i - 1;

		while (t > 0) {
			lenNum++;
			t /= 10;
		}

		t = lenPolinom - i - 1;
		int* num = new int[lenNum];

		for (int j = 0; j < lenNum; ++j) {
			num[lenNum - j - 1] = t % 10;
			t /= 10;
		}

		fracDegMonom.lenNumerator = lenNum;
		fracDegMonom.lenDenominator = 1;
		fracDegMonom.sign = 0;
		fracDegMonom.numerator = num;
		fracDegMonom.denominator = new int[fracDegMonom.lenDenominator];
		fracDegMonom.denominator[0] = 1;

		newNumber[i] = MUL_QQ_Q(fracDegMonom, polinom[i]);
	}

	return newNumber;
}