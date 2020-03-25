#include "Modules.h"
int* ADD_NN_N(int lenNumber1, int lenNumber2, int* lenSum, int number1[], int number2[]) {
	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);
	int lenShortNumber;
	int lenLongNumber;
	int* shortNumber;
	int* longNumber;
	int diffLens;
	int decade = 0;
	int currentDigit;
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
	for (int i = lenShortNumber - 1; i >= 0; --i) {
		currentDigit = longNumber[i + diffLens];
		longNumber[i + diffLens] = (longNumber[i + diffLens] + shortNumber[i] + decade) % 10;
		decade = (currentDigit + shortNumber[i] + decade) / 10;
	}
	for (int i = diffLens - 1; i >= 0; --i) {
		currentDigit = longNumber[i];
		longNumber[i] = (longNumber[i] + decade) % 10;
		decade = (currentDigit + decade) / 10;
	}
	if (decade != 0) {
		*lenSum = lenLongNumber + 1;
		int* sumNumbers = new int[*lenSum];
		sumNumbers[0] = 1;
		for (int i = 0; i < *lenSum - 1; ++i) {
			sumNumbers[i + 1] = longNumber[i];
		}
		return sumNumbers;
	}
	*lenSum = lenLongNumber;
	return longNumber;
}