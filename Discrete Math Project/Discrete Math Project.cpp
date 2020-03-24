#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int a[2];
    a[0] = 1;
    a[1] = 2;
    int b[2];
    b[0] = 1;
    b[1] = 3;
    cout << COM_NN_D(2, 2, a, b);
}


