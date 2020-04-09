
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int* a = new int[4];
    int* b = new int[3];

    a[0] = 9;
    a[1] = 9;
    a[2] = 9;
    a[3] = 9;

    b[0] = 9;
    b[1] = 7;
    b[2] = 6;


    int len = 0;
    int* c = MOD_NN_N(4, 2, len, a, b);

    cout << len << endl;
    for (int i = 0; i < len; i++) {
        cout << c[i];
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < 2; i++) {
        cout << b[i];
    }
    }
    


	



