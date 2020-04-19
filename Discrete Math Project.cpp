#include <iostream>
#include "Modules.h"
#include <algorithm>

using namespace std;

int main()
{
    Fractions num1, num2, res;
    
    cin >> num1.lenNumerator >> num2.lenNumerator;

    num1.numerator = new int[num1.lenNumerator];
    num2.numerator = new int[num2.lenNumerator];

    for (int i = 0; i < num1.lenNumerator; i++) {
        cin >> num1.numerator[i];
    }

    for (int i = 0; i < num2.lenNumerator; i++) {
        cin >> num2.numerator[i];
    }

    res = MOD_ZZ_Z(num1, num2);

    cout << endl;
    for (int i = 0; i < res.lenNumerator; i++) {
        cout << res.numerator[i];
    }

}
    