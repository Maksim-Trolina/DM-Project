#include <iostream>
#include "Modules.h"
#include <algorithm>

using namespace std;

int main()
{
    Fractions* nums1 = PolynomialFilling(2);
    Fractions* nums2 = PolynomialFilling(2);
    int len;
    Fractions* newNums = ADD_PP_P(nums1, nums2, 2, 2, len);

    PolynomialReading(newNums, len);
    

}
    