#include "Modules.h"

int* DIV_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]) {
	
	if (!NZER_N_B(number1)) 
	{
		signOutput = 0;
		lenOutput = 1;
		int* newNumber = new int[1];
		newNumber[0] = 0;
		return newNumber;
	}

	if (sign1 == sign2)
	{
		signOutput = 0;
	}
	else
	{
		signOutput = 1;
	}

	int* newNumber = DIV_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);

	return newNumber;

}