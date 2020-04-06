
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
    
    int c = DIV_NN_Dk(lenNumber + 1, lenNumber, a, b, len);
    cout << len << endl;
    cout << c << endl;
    for (int i = 0; i < lenNumber + 1; i++) {
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < lenNumber; i++) {
        cout << b[i];
    }
    


	
}


