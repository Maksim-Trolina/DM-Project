#include "Modules.h"


void RED_Q_Q(int lenNumerator, int lenDenominator, int& lenOutputNumerator, int& lenOutputDenominator,
	int numerator[], int denominator[], int numeratorOutput[], int denominatorOutput[])
{
	if (numerator[0] == 0) {
		for (int i = 0; i < lenNumerator; i++) {
			numeratorOutput[i] = numerator[i];
		}
		for (int i = 0; i < lenDenominator; i++) {
			denominatorOutput[i] = denominator[i];
		}
		lenOutputNumerator = lenNumerator;
		lenOutputDenominator = lenDenominator;
		return;
	}
	int* numeratorCopy = new int[lenNumerator];
	int* denominatorCopy = new int[lenDenominator];

	int sign = 0;

	for (int i = 0; i < lenNumerator; i++) {
		numeratorCopy[i] = numerator[i];
	}
	for (int i = 0; i < lenDenominator; i++) {
		denominatorCopy[i] = denominator[i];
	}


	while (true) {

		int len = 0;
		int* GCF = GCF_NN_N(lenNumerator, lenDenominator, len, numeratorCopy, denominatorCopy);
		
		if (len == 1 && GCF[0] == 1) {
			break;
		}

		numeratorCopy = DIV_ZZ_Z(lenNumerator, len, lenNumerator, 0, 0, sign, numeratorCopy, GCF);
		denominatorCopy = DIV_ZZ_Z(lenDenominator, len, lenDenominator, 0, 0, sign, denominatorCopy, GCF);
	}

	lenOutputNumerator = lenNumerator;
	lenOutputDenominator = lenDenominator;

	
	
	for (int i = 0; i < lenNumerator; i++) {
		numeratorOutput[i] = numeratorCopy[i];
	}
	for (int i = 0; i < lenDenominator; i++) {
		denominatorOutput[i] = denominatorCopy[i];
	}
}