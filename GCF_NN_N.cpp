#include "Modules.h"
#include <iostream>

using namespace std;

int* GCF_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]) {


	if ((!NZER_N_B(number1)) || (!NZER_N_B(number2))) {
		cout << "Input is not correct!" << endl;
		return 0;
	}

	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);

	int* localnumber1 = new int[lenNumber1];
	int* localnumber2 = new int[lenNumber2];

	for (int i = 0; i < lenNumber1; i++) {
		localnumber1[i] = number1[i];
		cout << localnumber1[i] << endl;
	}

	cout << endl;


	for (int i = 0; i < lenNumber2; i++) {
		localnumber2[i] = number2[i];
		cout << localnumber2[i] << endl;
	}

	cout << endl;
	int* answ;


	switch (flag) {

	case 2:

		answ = MOD_NN_N(lenNumber1, lenNumber2, lenOutput, localnumber1, localnumber2);

		while (NZER_N_B(answ)) {


			for (int i = 0; i < lenNumber1; i++) {
				localnumber1[i] = localnumber2[i];
			}

			for (int i = 0; i < lenOutput; i++) {
				localnumber2[i] = answ[i];
			}

			answ = MOD_NN_N(lenNumber1, lenNumber2, lenOutput, localnumber1, localnumber2);

			lenNumber1 = lenNumber2;
			lenNumber2 = lenOutput;
		}
		break;

	default:

		answ = MOD_NN_N(lenNumber1, lenNumber2, lenOutput, localnumber1, localnumber2);

		while (NZER_N_B(answ)) {


			for (int i = 0; i < lenNumber2; i++) {
				localnumber1[i] = localnumber2[i];
			}

			for (int i = 0; i < lenOutput; i++) {
				localnumber2[i] = answ[i];
			}

			answ = MOD_NN_N(lenNumber1, lenNumber2, lenOutput, localnumber1, localnumber2);

			lenNumber1 = lenNumber2;
			lenNumber2 = lenOutput;

		}
		break;
	}
	return localnumber2;
}