
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int* a = new int[4];
    int* b = new int[2];
    a[0] = 9;
    a[1] = 9;
    a[2] = 9;
    a[3] = 9;

    b[0] = 3;
    b[1] = 0;

    int len = 0;
    int sign1 = 0;
    int sign2 = 1;
    int sig = 0;

    int* c = MUL_ZZ_Z(4, 2, len, sign1, sign2, sig, a, b);
    cout << len << endl;
    cout << sig << endl;
    for (int i = 0; i < len; i++) {
        cout << c[i];
    }
    }
    


	



