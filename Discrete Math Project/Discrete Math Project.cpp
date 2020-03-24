#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int a[4];
    a[0] = 9;
    a[1] = 2;
    a[2] = 0;
    a[3] = 3;
    int* b = MUL_ND_N(4, a, 9);
    for (int i = 0; i < 5; i++) {
        cout << b[i];
    }

}


