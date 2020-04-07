
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
    int* d = new int[1];
    d[0] = 0;
    int c = 0;
    MUL_ZM_Z(c,d);
    cout << c;
    }
    


	



