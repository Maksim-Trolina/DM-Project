
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
	int* a = new int[3];
	int* b = new int[2];

	a[0] = 2;
	a[1] = 1;
	a[2] = 0;

	b[0] = 6;
	b[1] = 0;

	int* c = new int[3];
	int* d = new int[2];
	int len1 = 0;
	int len2 = 0;

	RED_Q_Q(3, 2, len1, len2, a, b, c, d);
	
	cout << len1 << endl;
	for (int i = 0; i < len1; i++) {
		cout << c[i];
	}
	cout << endl;
	cout << len2 << endl;
	for (int i = 0; i < len2; i++) {
		cout << d[i];
	}
	
}
    


	



