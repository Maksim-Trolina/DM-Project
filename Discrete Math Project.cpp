
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
	int arr1ch[] = { 4 };
	int arr1zn[] = { 1, 2 };
	int arr2ch[] = { 2 };
	int arr2zn[] = { 3 };


	int d1 = 1;
	int d2 = 2;
	int d3 = 1;
	int d4 = 1;

	int sign1 = 1;
	int sign2 = 0;

	int lenDENoutput = 0;
	int lenNUMoutput = 0;

	int* NUM;
	int* DEN;

	ADD_QQ_Q(d1, d2, d3, d4, sign1, sign2, lenNUMoutput, lenDENoutput, arr1ch, arr1zn, arr2ch, arr2zn, NUM, DEN);

	for (int i = 0; i < lenNUMoutput; i++) {
		cout << NUM[i];
	}

	cout << endl;

	for (int i = 0; i < lenDENoutput; i++) {
		cout << DEN[i];
	}
	
}
    


	



