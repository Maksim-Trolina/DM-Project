#include "Modules.h"
#include <algorithm>

using namespace std;

Fractions* AddMoreWithLess(Fractions nums1[], Fractions nums2[], int lenNums1, int lenNums2);

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

		newNums[i] = ADD_QQ_Q(nums1[i], nums2[j]);
	}
	for (int i = lenNums1 - lenNums2 - 1; i >= 0; i--) {
		newNums[i] = nums1[i];
	}

	return newNums;
}