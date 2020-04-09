#include "Modules.h"
#include <iostream>


using namespace std;

int* DIV_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {

	int* newNumber = new int[lenNumber1];
	int* num = new int[lenNumber1];
	int position = 0;
	int lastPosition = 0;
	lenOutput = 0;

	for (int i = 0; i < lenNumber1; i++) {
		num[i] = number1[i];
	}
	

	while (COM_NN_D(lenNumber1, lenNumber2, num, number2) != 1) {

		int digit = DIV_NN_Dk(lenNumber1, lenNumber2, num, number2, position);

		if (lastPosition != 0) {
			while (lastPosition - position > 1)
			{
				newNumber[lenOutput] = 0;
				lenOutput = (lenOutput + 1);
				lastPosition--;
			}
		}
		newNumber[lenOutput] = digit;
	
		int len = 0;
		int* x = MUL_Nk_N(lenNumber2,number2,position,len);

		num = SUB_NDN_N(lenNumber1, len, lenNumber1, newNumber[lenOutput],num, x);
		
		lenOutput = (lenOutput + 1);
		lastPosition = position;
	}

		while (position>0)
		{
			newNumber[lenOutput] = 0;
			lenOutput = (lenOutput + 1);
			position--;
		}

	return newNumber;
}