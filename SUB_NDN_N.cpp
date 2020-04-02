#include "Modules.h"

int* SUB_NDN_N(int lenNumber1, int lenNumber2, int& lenOutput, int digit, int number1[], int number2[]) {

	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);
	int* longNumber;
	int* shortNumber;
	int lenLongNumber;
	int lenShortNumber;
	if (flag == 2) {
		lenShortNumber = lenNumber2;
		lenLongNumber = lenNumber1;
		shortNumber = number2;
		longNumber = number1;
	}
	else {
		lenShortNumber = lenNumber1;
		lenLongNumber = lenNumber2;
		shortNumber = number1;
		longNumber = number2;
	}
	int lenMultNumDig = 0;
	int* multNumDig = MUL_ND_N(lenShortNumber, shortNumber, digit, lenMultNumDig);
	flag = COM_NN_D(lenLongNumber, lenMultNumDig, longNumber, multNumDig);
	if (flag == 1) {
		lenOutput = 1;
		int* error = new int[lenOutput];
		error[0] = -1;
		return error;
	}
	int* newNumber = SUB_NN_N(lenLongNumber, lenMultNumDig, lenOutput, longNumber, multNumDig);
	return newNumber;
}