
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int* a = new int[3];
    int lenNumber = 3;
    int len = 0;
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    int* b = MUL_ND_N(lenNumber, a, 0, len);
    cout << len << endl;
    for (int i = 0; i < len; i++) {
        cout << b[i];
    }
    cout << endl;
    cout << lenNumber << endl;
    for (int i = 0; i < lenNumber; i++) {
        cout << a[i];
    }
}


