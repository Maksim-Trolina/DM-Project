
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
	int arr1[] = { 1, 6};
	int arr2[] = { 1, 4, 8};
	int d1 = 2;
	int d2 = 3;
	int d = 0;
	int* g = LCM_NN_N(d1, d2, d, arr1, arr2);

	for (int i = 0; i < d1; i++) {
		cout << arr1[i] << endl;
	}

	for (int i = 0; i < d2; i++) {
		cout << arr2[i] << endl;
	}

	for (int i = 0; i < d; i++) {
		cout << g[i];
	}
	
}
    


	



