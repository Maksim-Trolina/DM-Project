﻿
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int* a = new int[4];
    int* b = new int[2];
    int lenNumber = 3;
    int len1 = 0;
	int len = 0;
    a[0] = 9;
    a[1] = 9;
    a[2] = 9;
    a[3] = 9;

    b[0] = 9;
    b[1] = 9;

    int* c = DIV_NN_N(lenNumber + 1, lenNumber-1, len, a, b);
    cout << len << endl;

    for (int i = 0; i < len; i++) {
        cout << c[i];
    }
    cout << endl;
    for (int i = 0; i < lenNumber + 1; i++) {
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < lenNumber-1; i++) {
        cout << b[i];
    }
    


	
}


