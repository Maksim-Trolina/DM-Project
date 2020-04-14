
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{/*
    int* a = new int[3];
    int* b = new int[2];

    a[0] = 2;
    a[1] = 3;
    a[2] = 0;
    

    b[0] = 2;
    b[1] = 3;
    

    int len = 0;
    int sign = 0;

    int* c = DIV_ZZ_Z(3, 2, len, 1, 1, sign, a, b);
    cout << len << endl;
    cout << sign << endl;
    for (int i = 0; i < len; i++) {
        cout << c[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < 2; i++) {
        cout << b[i];
    }
	*/
	
	int arr1[] = { 1, 4};
	int arr2[] = { 1, 3, 3 };
	int d1 = 2;
	int d2 = 3;
	int d = 0;
	int* g = GCF_NN_N(d1, d2, d, arr1, arr2);

	for (int i = 0; i < d; i++) {
		cout << g[i];
	}
	
}
    


	



