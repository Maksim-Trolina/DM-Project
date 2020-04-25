#include "Modules.h"

using namespace std;

int* GCF_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {


	/*if ((!NZER_N_B(number1)) || (!NZER_N_B(number2))) {
		int lenRes = 1;
		int* res = new int[lenRes];
		res[0] = 0;
		return res;
	}*/

	if (NZER_N_B(number1) && !(NZER_N_B(number2))) {
		lenOutput = lenNumber1;
		return number1;
	}
	else if (!(NZER_N_B(number1)) && NZER_N_B(number2)) {
		lenOutput = lenNumber2;
		return number2;
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

	int* answ;

	switch (flag) {

	case 2:

		do {

			answ = MOD_NN_N(lenNumber1, lenNumber2, lenOutput, localnumber1, localnumber2);
			
			if (!NZER_N_B(answ)) {
				lenOutput = lenNumber2;
				return localnumber2;
			}

			for (int i = 0; i < lenNumber2; i++) {
				localnumber1[i] = localnumber2[i];
			}

			for (int i = 0; i < lenOutput; i++) {
				localnumber2[i] = answ[i];
			}

			lenNumber1 = lenNumber2;
			lenNumber2 = lenOutput;
			lenOutput = lenNumber1;
		}
		while (NZER_N_B(answ));

		break;

	default:

		do {

			answ = MOD_NN_N(lenNumber2, lenNumber1, lenOutput, localnumber2, localnumber1);

			if (!NZER_N_B(answ)) {
				lenOutput = lenNumber1;
				return localnumber1;
			}

			for (int i = 0; i < lenNumber1; i++) {
				localnumber2[i] = localnumber1[i];
			}

			for (int i = 0; i < lenOutput; i++) {
				localnumber1[i] = answ[i];
			}

			lenNumber2 = lenNumber1;
			lenNumber1 = lenOutput;
			lenOutput = lenNumber2;
		} while (NZER_N_B(answ));
		
		break;
	}

	return localnumber1;
}