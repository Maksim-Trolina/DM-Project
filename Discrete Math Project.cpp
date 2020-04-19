#include <iostream>
#include "Modules.h"
#include <algorithm>

using namespace std;

int main()
{
    Fractions* nums1 = new Fractions[2];
    Fractions* nums2 = new Fractions[1];

    for (int i = 0; i < 2; i++) {
        cin >> nums1[i].sign;
        cin >> nums1[i].lenNumerator;

        for (int j = 0; j < nums1[i].lenNumerator; j++) {
            cin >> nums1[i].numerator[j];
        }

        cin >> nums1[i].lenDenominator;
        for (int j = 0; j < nums1[i].lenDenominator; j++) {
            cin >> nums1[i].denominator[j];
        }
    }

}
    