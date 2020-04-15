#include "Modules.h"
void DIV_QQ_Q(int signNumerator1, int signNumerator2, int& signNumeratorOutput, int lenNumerator1, int lenNumerator2, int lenDenonimator1, int lenDenonimator2, int& lenNumeratorOutput, int& lenDenonimatorOutput, int numerator1[], int numerator2[], int** numeratorOutput, int denonimator1[], int denonimator2[], int** denonimatorOutput) {
	int* numRes = MUL_ZZ_Z(lenNumerator1, lenDenonimator2, lenNumeratorOutput, signNumerator1, signNumerator2, signNumeratorOutput, numerator1, denonimator2);
	int* denumRes = MUL_NN_N(lenDenonimator1, lenNumerator2, lenDenonimatorOutput, denonimator1, numerator2);
	*numeratorOutput = numRes;
	*denonimatorOutput = denumRes;
}
