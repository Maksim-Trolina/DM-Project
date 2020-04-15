#include "Modules.h"
#include <iostream>
using namespace std;

// NUM - числитель
// DEN - знаменатель

void ADD_QQ_Q(int NUMlennumber1, int DENlennumber1, int NUMlennumber2, int DENlennumber2, int sign1, int sign2, int& NUMlenOutput, int& DENlenOutput,
	          int NUMnumber1[], int DENnumber1[], int NUMnumber2[], int DENnumber2[]) 
{
	if (!NZER_N_B(DENnumber1) || !NZER_N_B(DENnumber2)) {

		return;
	}

	int* DENnewnumber = LCM_NN_N(DENlennumber1, DENlennumber2, DENlenOutput, DENnumber1, DENnumber2);

	int lenOutputkef1 = 0;
	int lenOutputkef2 = 0;

	int* keffornumber1 = DIV_NN_N(DENlenOutput, DENlennumber1, lenOutputkef1, DENnewnumber, DENnumber1);
	int* keffornumber2 = DIV_NN_N(DENlenOutput, DENlennumber2, lenOutputkef2, DENnewnumber, DENnumber2);

	int ternlenOutput1 = 0;
	int ternlenOutput2 = 0;

	int signOutputtern1 = 0;
	int signOutputtern2 = 0;

	int* thirstterm = MUL_ZZ_Z(NUMlennumber1, lenOutputkef1, ternlenOutput1, sign1, 0, signOutputtern1, NUMnumber1, keffornumber1);
	int* secondtern = MUL_ZZ_Z(NUMlennumber2, lenOutputkef2, ternlenOutput2, sign2, 0, signOutputtern2, NUMnumber2, keffornumber2);

	int signOutputanswer = 0;

	int* NUMnewnumber = ADD_ZZ_Z(ternlenOutput1, ternlenOutput2, NUMlenOutput, sign1, sign2, signOutputanswer, thirstterm, secondtern);

	
	for (int i = 0; i < NUMlenOutput; i++) {
		cout << NUMnewnumber[i];
	}
	cout << endl;
	for (int i = 0; i < DENlenOutput; i++) {
		cout << DENnewnumber[i];
	}

}