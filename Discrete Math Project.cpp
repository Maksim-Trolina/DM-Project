
#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
	/*int* a = new int[3];
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
	*/

	int NUMarr1[] = { 3,0,1 };
	int DENarr1[] = { 1 };

	int NUMarr2[] = { 3,0,2 };
	int DENarr2[] = { 1 };

	int* NUManswer = new int [3];
	int* DENanswer = new int [1];

	int sign1 = 0;
	int sign2 = 1;

	int NUMoutput = 0;
	int DENoutput = 0;
	int SignOutput = 0;

	int NUMlen1 = 3;
	int DENlen1 = 1;
	int NUMlen2 = 3;
	int DENlen2 = 1;

	ADD_QQ_Q(NUMlen1, DENlen1, NUMlen2, DENlen2, sign1, sign2, SignOutput, NUMoutput, DENoutput, NUMarr1, DENarr1, NUMarr2, DENarr2, &NUManswer, &DENanswer);


	for (int i = 0; i < NUMoutput; i++) {
		cout << NUManswer[i];
	}

	cout << endl;


	for (int i = 0; i < DENoutput; i++) {
		cout << DENanswer[i];
	}

}
    


	



