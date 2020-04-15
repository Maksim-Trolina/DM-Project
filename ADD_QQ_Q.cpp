#include "Modules.h"

// NUM - числитель
// DEN - знаменатель

void ADD_QQ_Q(int NUMlennumber1, int DENlennumber1, int NUMlennumber2, int DENlennumber2, int sign1, int sign2, int& NUMlenOutput, int& DENlenOutput,
	          int NUMnumber1[], int DENnumber1[], int NUMnumber2[], int DENnumber2[], int NUMnewnumber[], int DENnewnumber[]) 
{
	if (!NZER_N_B(DENnumber1) || !NZER_N_B(DENnumber2)) {

		return;
	}

	int* localNUMnumber1 = new int[NUMlennumber1];
	int* localDENnumber1 = new int[DENlennumber1];
	int* localNUMnumber2 = new int[NUMlennumber1];
	int* localDENnumber2 = new int[DENlennumber2];


	for (int i = 0; i < NUMlennumber1; i++) {

		localNUMnumber1[i] = NUMnumber1[i];
	}
	for (int i = 0; i < DENlennumber1; i++) {

		localDENnumber1[i] = DENnumber1[i];
	}
	for (int i = 0; i < NUMlennumber2; i++) {

		localNUMnumber2[i] = NUMnumber2[i];
	}
	for (int i = 0; i < DENlennumber2; i++) {

		localDENnumber2[i] = DENnumber2[i];
	}

	DENnewnumber = LCM_NN_N(DENlennumber1, DENlennumber2, DENlenOutput, localDENnumber1, localDENnumber2);

	int lenOutputkef1 = 0;
	int lenOutputkef2 = 0;

	int* keffornumber1 = DIV_NN_N(DENlenOutput, DENlennumber1, lenOutputkef1, DENnewnumber, localDENnumber1);
	int* keffornumber2 = DIV_NN_N(DENlenOutput, DENlennumber2, lenOutputkef2, DENnewnumber, localDENnumber2);

	int ternlenOutput1 = 0;
	int ternlenOutput2 = 0;

	int signOutputtern1 = 0;
	int signOutputtern2 = 0;

	int* thirstterm = MUL_ZZ_Z(NUMlennumber1, lenOutputkef1, ternlenOutput1, sign1, 0, signOutputtern1, localNUMnumber1, keffornumber1);
	int* secondtern = MUL_ZZ_Z(NUMlennumber2, lenOutputkef2, ternlenOutput2, sign2, 0, signOutputtern2, localNUMnumber2, keffornumber2);

	int signOutputanswer = 0;

	NUMnewnumber = ADD_ZZ_Z(ternlenOutput1, ternlenOutput2, NUMlenOutput, sign1, sign2, signOutputanswer, thirstterm, secondtern);

}