#include "Modules.h"
int* SUB_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {

	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);
	int lenShortNumber;
	int lenLongNumber;
	int* shortNumber = 0;
	int* longNumber = 0;
	int* newNumber;
	int diffLens;
	int decade = 0;
	int nonZeroPos;
	int currentDigit;
	if (flag == 2) {
		lenShortNumber = lenNumber2;
		lenLongNumber = lenNumber1;
		shortNumber = number2;
		longNumber = number1;
	}
	else if (flag == 1) {
		lenShortNumber = lenNumber1;
		lenLongNumber = lenNumber2;
		shortNumber = number1;
		longNumber = number2;
	}
	else {
		lenOutput = 1;
		newNumber = new int[lenOutput];
		newNumber[0] = 0;
		return newNumber;
	}
	diffLens = lenLongNumber - lenShortNumber;
	newNumber = new int[lenLongNumber];
	for (int i = lenShortNumber - 1; i >= 0; --i) {
		currentDigit = longNumber[i + diffLens] - decade;
		if (currentDigit < shortNumber[i]) {
			decade = 1;
		}
		else {
			decade = 0;
		}
		newNumber[i + diffLens] = currentDigit + decade * 10 - shortNumber[i];
	}
	for (int i = diffLens - 1; i >= 0; --i) {
		currentDigit = longNumber[i] - decade;
		if (currentDigit >= 0) {
			decade = 0;
		}
		newNumber[i] = currentDigit + decade * 10;
	}
	for (nonZeroPos = 0; nonZeroPos < lenLongNumber && newNumber[nonZeroPos] == 0; ++nonZeroPos);
	if (nonZeroPos != 0) {
		lenOutput = lenLongNumber - nonZeroPos;
		int* subNumbers = new int[lenOutput];
		for (int i = 0; i < lenOutput; ++i) {
			subNumbers[i] = newNumber[i + nonZeroPos];
		}
		return subNumbers;
	}
	lenOutput = lenLongNumber;
	return newNumber;
}