
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
    int* a = new int[4];
    int* b = new int[4];

    a[0] = 9;
    a[1] = 9;
    a[2] = 9;
    a[3] = 8;

    b[0] = 9;
    b[1] = 9;
    b[2] = 9;
    b[3] = 9;

    if (INT_Q_B(4, 4, a, b)) {
        cout << "sosi";
    }

    for (int i = 0; i < 4; i++) {
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << b[i];
    }
    }
    


	



