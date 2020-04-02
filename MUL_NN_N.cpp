#include "Modules.h"
#include <iostream>

using namespace std;

int* MUL_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {

	int* newNumber = NULL;

	for (int i = 0; i < lenNumber1; i++) {
		int len = 0;

		int* num = MUL_ND_N(lenNumber2, number2, number1[i], len);
		for (int j = 0; j < len; j++) {
			cout << num[j];
		}
		cout << endl;

		num = MUL_Nk_N(len, num, lenNumber1 - i - 1, len);
		for (int j = 0; j < len; j++) {
			cout << num[j];
		}
		cout << endl;

		if (newNumber == NULL) {
			newNumber = num;
			lenOutput = len;
		}
		else {
			newNumber = ADD_NN_N(len, lenOutput, lenOutput, num, newNumber);
		}
		for (int j = 0; j < lenOutput; j++) {
			cout << newNumber[j];
		}
		cout << endl;
		num = NULL;
	}
	return newNumber;
}