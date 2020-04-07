#include "Modules.h"
#include <iostream>

using namespace std;

int* MUL_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {

	int* newNumber = new int[lenNumber1 + lenNumber2];
	lenOutput = 1;
	newNumber[0] = 0;
	for (int i = lenNumber1 - 1; i >= 0; i--) {
		int len = 0;
		int* num = MUL_ND_N(lenNumber2, number2, number1[i], len);

		num = MUL_Nk_N(len,num, lenNumber1-i-1, len);
		
		newNumber = ADD_NN_N(len, lenOutput, lenOutput, num, newNumber);
		
	}
	return newNumber;
}