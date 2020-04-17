#include "Modules.h"


Number* ADD_PP_P(Number numbers1[], Number numbers2[],int lenNums1,int lenNums2,int& lenOutput) {
	
	int minLen;
	int maxLen;
	Number* newNums;
	if (lenNums1 < lenNums2) {

		minLen = lenNums1;
		newNums = new Number[lenNums2];
		maxLen = lenNums2;
	}
	else {
		minLen = lenNums2;
		newNums = new Number[lenNums1];
		maxLen = lenNums1;
	}

	for (int i = 0; i < minLen; i++) 
	{
		int indexNew = maxLen - i - 1;
		int index1 = lenNums1 - i - 1;
		int index2 = lenNums2 - i - 1;
		ADD_QQ_Q(numbers1[index1].lenNumerator, numbers1[index1].lenDenominator, numbers2[index2].lenNumerator, numbers2[index2].lenDenominator, numbers1[index1].sign,

			numbers2[index2].sign, newNums[indexNew].sign, newNums[indexNew].lenNumerator, newNums[indexNew].lenDenominator, numbers1[index1].numerator, numbers1[index1].denominator,

			numbers2[index2].numerator, numbers2[index2].denominator, &newNums[indexNew].numerator, &newNums[indexNew].denominator);
	}
	if (maxLen == lenNums1) {

		for (int i = minLen; i < maxLen; i++) {
			newNums[i] = numbers1[i];
		}
	}
	else {
		for (int i = minLen; i < maxLen; i++) {
			newNums[i] = numbers2[i];
		}
	}

	lenOutput = maxLen;
	
	return newNums;

}