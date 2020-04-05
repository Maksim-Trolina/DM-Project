#include "Modules.h"

int DIV_NN_Dk(int lenNumber1, int lenNumber2, int number1[], int number2[], int& position) {

	if (!NZER_N_B(number1) || !NZER_N_B(number2)) {
		return 0;
	}
	position = 0;
	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);
	int digit = 0;
	int* cup;
	int* newNumber2;
	int* newNumber1;
	int lenLocalOutput = 0;


	switch (flag) {

	case 2:

		if (COM_NN_D(lenNumber2, lenNumber2, number1, number2) != 1) {
			position = lenNumber1 - lenNumber2;
		}
		else {
			position = (lenNumber1 - lenNumber2) - 1;
		}

		newNumber2 = MUL_Nk_N(lenNumber2, number2, position, lenLocalOutput);
		lenNumber2 = lenLocalOutput;

		while (COM_NN_D(lenNumber1, lenNumber2, number1, newNumber2) != 1) {

			digit++;

			cup = SUB_NN_N(lenNumber1, lenNumber2, lenLocalOutput, number1, newNumber2);
			for (int i = 0; i < lenLocalOutput; i++) {
				number1[i] = cup[i];
			}
			lenNumber1 = lenLocalOutput;
		}

		break;

	case 1:

		if (COM_NN_D(lenNumber1, lenNumber1, number2, number1) != 1) {
			position = lenNumber2 - lenNumber1;
		}
		else {
			position = (lenNumber2 - lenNumber1) - 1;
		}

		newNumber1 = MUL_Nk_N(lenNumber1, number1, position, lenLocalOutput);
		lenNumber1 = lenLocalOutput;

		while (COM_NN_D(lenNumber2, lenNumber1, number2, newNumber1) != 1) {

			digit++;
			cup = SUB_NN_N(lenNumber2, lenNumber1, lenLocalOutput, number2, newNumber1);
			for (int i = 0; i < lenLocalOutput; i++) {
				number2[i] = cup[i];
			}
			lenNumber2 = lenLocalOutput;

		}

		break;

	default:
		position = 0;
		digit = 1;
		break;
	}
	return digit;
}