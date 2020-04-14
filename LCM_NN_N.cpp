#include "Modules.h"


int* LCM_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {

	if ((!NZER_N_B(number1)) || (!NZER_N_B(number2))) {
		return 0;
	}

	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);

	int* localnumber1 = new int[lenNumber1];
	int* localnumber2 = new int[lenNumber2];

	for (int i = 0; i < lenNumber1; i++) {
		localnumber1[i] = number1[i];
	}

	for (int i = 0; i < lenNumber2; i++) {
		localnumber2[i] = number2[i];
	}

	int lenNOD = 0;
	int lenMUL = 0;

	int* NOD = GCF_NN_N(lenNumber1, lenNumber2, lenNOD, localnumber1, localnumber2);

	int* MulNumbers = MUL_NN_N(lenNumber1, lenNumber2, lenMUL, localnumber1, localnumber2);

	int* newNumber = DIV_NN_N(lenMUL, lenNOD, lenOutput, MulNumbers, NOD);

	return newNumber;
}