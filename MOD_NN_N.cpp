#include "Modules.h"

int* MOD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {

	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);

	if (flag == 1) {
		lenOutput = lenNumber1;
		return number1;
	}
	int lenDiv = 0;
	int* div;
	int lenIntegPart = 0;
	int* integPart;
	int* longNumber;
	int* shortNumber;
	int lenLongNumber;
	int lenShortNumber;
	int* newNumber;
	if (flag == 2) {
		longNumber = number1;
		shortNumber = number2;
		lenLongNumber = lenNumber1;
		lenShortNumber = lenNumber2;
	}
	else if (flag == 1) {
		longNumber = number2;
		shortNumber = number1;
		lenLongNumber = lenNumber1;
		lenShortNumber = lenNumber2;
	}
	else {
		lenOutput = 1;
		newNumber = new int[lenOutput];
		newNumber[0] = 0;
		return newNumber;
	}
	div = DIV_NN_N(lenLongNumber, lenShortNumber, lenDiv, longNumber, shortNumber);
	integPart = MUL_NN_N(lenDiv, lenShortNumber, lenIntegPart, div, shortNumber);
	newNumber = SUB_NN_N(lenLongNumber, lenIntegPart, lenOutput, longNumber, integPart);
	return newNumber;

}