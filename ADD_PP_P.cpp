#include "Modules.h"
#include <algorithm>

using namespace std;

Fractions* ADD_PP_P(Fractions nums1[], Fractions nums2[],int lenNums1,int lenNums2,int& lenOutput) {
	
	
	if (lenNums1 >= lenNums2) {

		lenOutput = lenNums1;
		return AddMoreWithLess(nums1, nums2, lenNums1, lenNums2);
	}
	
	lenOutput = lenNums2;
	
	return AddMoreWithLess(nums2, nums1, lenNums2, lenNums1);
	

}

Fractions* AddMoreWithLess(Fractions nums1[], Fractions nums2[], int lenNums1, int lenNums2) {

	Fractions* newNums = new Fractions[lenNums1];


	for (int i = lenNums1 - 1; i + lenNums2 - lenNums1 >= 0; i--) {
		
		int j = i + lenNums2 - lenNums1;

		ADD_QQ_Q(nums1[i].lenNumerator, nums1[i].lenDenominator, nums2[i-j].lenNumerator, nums2[i-j].lenDenominator, nums1[i].sign, nums2[i-j].sign, newNums[i].sign, newNums[i].lenNumerator, newNums[i].lenDenominator,
			nums1[i].numerator, nums1[i].denominator, nums2[i-j].numerator, nums2[i-j].denominator, &newNums[i].numerator, &newNums[i].denominator);
	}
	for (int i = lenNums1 - lenNums2 - 1; i >= 0; i--) {
		newNums[i] = nums1[i];
	}

	return newNums;
}