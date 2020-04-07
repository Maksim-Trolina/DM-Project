#include "Modules.h"


int* ADD_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]) {
	if (sign1 == 0 && sign2 == 0) {
		signOutput = 0;
		return ADD_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);
	}
	if (sign1 == 1 && sign2 == 1) {
		signOutput = 1;
		return ADD_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);
	}
	if (sign1 == 1) {
		if (COM_NN_D(lenNumber1, lenNumber2, number1, number2) != 2) {
			signOutput = 0;
		}
		else {
			signOutput = 1;
		}
		return SUB_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);
	}
	else {
		if (COM_NN_D(lenNumber1, lenNumber2, number1, number2) != 1) {
			signOutput = 0;
		}
		else {
			signOutput = 1;
		}
		return SUB_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);
	}
}