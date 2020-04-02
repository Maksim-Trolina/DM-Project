#include "Modules.h"
int* ADD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {
	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);
	int lenShortNumber;
	int lenLongNumber;
	int* shortNumber;
	int* longNumber;
	int* newNumber;
	int diffLens;
	int decade = 0;
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
	diffLens = lenLongNumber - lenShortNumber;
	newNumber = new int[lenLongNumber];
	for (int i = lenShortNumber - 1; i >= 0; --i) {
		newNumber[i + diffLens] = (longNumber[i + diffLens] + shortNumber[i] + decade) % 10;
		decade = (longNumber[i + diffLens] + shortNumber[i] + decade) / 10;
	}
	for (int i = diffLens - 1; i >= 0; --i) {

		newNumber[i] = (longNumber[i] + decade) % 10;
		decade = (longNumber[i] + decade) / 10;
	}
	if (decade != 0) {
		lenOutput = lenLongNumber + 1;
		int* sumNumbers = new int[lenOutput];
		sumNumbers[0] = 1;
		for (int i = 0; i < lenOutput - 1; ++i) {
			sumNumbers[i + 1] = newNumber[i];
		}
		return sumNumbers;
	}
	lenOutput = lenLongNumber;
	return newNumber;
}