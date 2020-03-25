#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int lenNumber = 4;
    int* a = new int[6];
    a[0] = 4;
    a[1] = 2;
    a[2] = 0;
    a[3] = 3;
    a[4] = 7;
    a[5] = 8;
    int* b = new int[4];
    b[0] = 7;
    b[1] = 5;
    b[2] = 3;
    b[3] = 7;
    b = ADD_NN_N(lenNumber+2, lenNumber, lenNumber, a, b);
    for (int i = 0; i < lenNumber; i++) {
        cout << b[i];
    }

}


