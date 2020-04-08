#include "Modules.h"

bool INT_Q_B(int lenNumber1, int lenNumber2, int number1[], int number2[]) {
	if (!NZER_N_B(number1)) {
		return true;
	}
	if (COM_NN_D(lenNumber1, lenNumber2, number1, number2) == 1) {
		return false;
	}
	int lenQuotientFromDivision = 0;
	int* quotientFromDivision = DIV_NN_N(lenNumber1, lenNumber2, lenQuotientFromDivision, number1, number2);
	int lenComposition = 0;
	int* composition = MUL_NN_N(lenQuotientFromDivision, lenNumber2, lenComposition, quotientFromDivision, number2);
	if (COM_NN_D(lenNumber1, lenComposition, number1, composition) == 0) {
		return true;
	}
	return false;
}