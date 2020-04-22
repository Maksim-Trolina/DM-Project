#include <iostream>
#include "Modules.h"
#include <algorithm>

using namespace std;

int main()
{
    int len1 = 2;
    int len2 = 2;
    Fractions* nums1 = new Fractions[len1];
    Fractions* nums2 = new Fractions[len2];

    nums1[0].sign = 0;
    nums1[1].sign = 1;

    nums2[0].sign = 0;
    nums2[1].sign = 0;

    nums1[0].lenNumerator = 1;
    nums1[0].lenDenominator = 1;
    nums1[1].lenNumerator = 1;
    nums1[1].lenDenominator = 1;

    nums2[0].lenNumerator = 1;
    nums2[0].lenDenominator = 1;
    nums2[1].lenNumerator = 1;
    nums2[1].lenDenominator = 1;

    nums1[0].numerator = new int[nums1[0].lenNumerator];
    nums1[0].denominator = new int[nums1[0].lenDenominator];
    nums1[1].numerator = new int[nums1[1].lenNumerator];
    nums1[1].denominator = new int[nums1[1].lenDenominator];
    nums1[0].numerator[0] = 2;
    nums1[0].denominator[0] = 5;
    nums1[1].numerator[0] = 2;
    nums1[1].denominator[0] = 7;

    nums2[0].numerator = new int[nums2[0].lenNumerator];
    nums2[0].denominator = new int[nums2[0].lenDenominator];
    nums2[1].numerator = new int[nums2[1].lenNumerator];
    nums2[1].denominator = new int[nums2[1].lenDenominator];
    nums2[0].numerator[0] = 5;
    nums2[0].denominator[0] = 1;
    nums2[1].numerator[0] = 2;
    nums2[1].denominator[0] = 9;


    int len;
    Fractions* newNums = MUL_PP_P(nums1, nums2, 2, 2, len);
    for (int i = 0; i < len; ++i) {
        if (newNums[i].sign == 1) {
            cout << "-";
        }
        for (int j = 0; j < newNums[i].lenNumerator; ++j) {
            cout << newNums[i].numerator[j];
        }

        cout << "/";

        for (int j = 0; j < newNums[i].lenDenominator; ++j) {
            cout << newNums[i].denominator[j];
        }

        cout << "\n";
    }


    //setlocale(LC_ALL, "Russian");
  // StartMenu();

    /*int* a = new int[2];
    int* b = new int[2];
1
    a[0] = 3;
    a[1] = 2;

    b[0] = 3;
    b[1] = 3;
    int len = 0;

    int* c = ADD_NN_N(2, 2, len, a, b);

    for (int i = 0; i < len; i++) {
        cout << c[i];
    }*/

   
    

}
    