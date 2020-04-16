#include "Modules.h"

int* SUB_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[])
{
	int* newNumber[1] = { 0 };

	if (COM_NN_D(lenNumber1, lenNumber2, number1, number2) == 2)
	{
		if ((NZER_N_B(number1) == false) || (NZER_N_B(number2) == false))
		{
			if ((NZER_N_B(number1) == false) && (NZER_N_B(number2) == false))
			{
				return;
			}
			else if ((NZER_N_B(number1) == true) && (NZER_N_B(number2) == false))
			{
				signOutput = sign1;
				return *newNumber = number1;
			}
			else if ((NZER_N_B(number1) == false) && (NZER_N_B(number2) == true))
			{
				if (sign2 == 0)
					signOutput = 1;
				else
					signOutput = 0;
				return *newNumber = number2;
			}
			else
			{
				if ((sign1 == 1) && (sign2 == 1))
				{
					signOutput = 1;
					return SUB_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);
				}
				if ((sign1 == 1) && (sign2 == 0))
				{
					signOutput = 1;
					return ADD_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);
				}
				if ((sign1 == 0) && (sign2 == 1))
				{
					signOutput = 0;
					return SUB_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);
				}
				if ((sign1 == 0) && (sign2 == 0))
				{
					signOutput = 0;
					return SUB_NN_N(lenNumber1, lenNumber2, lenOutput, number1, number2);
				}
			}
		}
		else if (COM_NN_D(lenNumber1, lenNumber2, number1, number2) == 1)
		{
			if ((NZER_N_B(number1) == false) || (NZER_N_B(number2) == false))
			{
				if ((NZER_N_B(number1) == false) && (NZER_N_B(number2) == false))
				{
					return 0;
				}
				else if ((NZER_N_B(number1) == true) && (NZER_N_B(number2) == false))
				{
					signOutput = sign1;
					return *newNumber = number1;
				}
				else if ((NZER_N_B(number1) == false) && (NZER_N_B(number2) == true))
				{
					if (sign2 == 0)
						signOutput = 1;
					else
						signOutput = 0;
					return *newNumber = number2;
				}
				else
				{
					if ((sign1 == 1) && (sign2 == 1))
					{
						signOutput = 1;
						return SUB_NN_N(lenNumber2, lenNumber1, lenOutput, number2, number1);
					}
					if ((sign1 == 0) && (sign2 == 1))
					{
						signOutput = 1;
						return ADD_NN_N(lenNumber2, lenNumber1, lenOutput, number2, number1);
					}
					if ((sign1 == 1) && (sign2 == 0))
					{
						signOutput = 0;
						return SUB_NN_N(lenNumber2, lenNumber1, lenOutput, number2, number1);
					}
					if ((sign1 == 0) && (sign2 == 0))
					{
						signOutput = 0;
						return SUB_NN_N(lenNumber2, lenNumber1, lenOutput, number2, number1);
					}
				}
			}
		}
	}
}