#include <iostream>
#include "COM_NN_D.h"

using namespace std;

int main()
{
    int a[2];
    a[0] = 1;
    a[1] = 2;
    int b[2];
    b[0] = 3;
    b[1] = 5;
    cout << COM_NN_D(2, 2, a, b);
}


