
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int* a = new int[4];
    int* b = new int[3];
    int lenNumber = 3;
    int len = 0;
    int len1 = 0;
    a[0] = 9;
    a[1] = 1;
    a[2] = 0;
    a[3] = 9;
    b[0] = 2;
    b[1] = 0;
    b[2] = 0;
    int* c = MUL_ND_N(lenNumber, b, 0, len);
    int* r = SUB_NN_N(lenNumber + 1, len, len1, a, c);
    for (int i = 0; i < len1; ++i) {
        cout << r[i];
    }


	
}


