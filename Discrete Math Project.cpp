
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


	int len1 = 0;
	int len2 = 0;

	Number num;
	num.lenNumerator = 0;
	num.lenDenominator = 0;
	num.sign = 0;
	num.numerator = new int[3];
	num.denominator = new int[2];

	RED_Q_Q(3, 2, num.lenNumerator, num.lenDenominator, a, b, num.numerator, num.denominator);

	
	
	cout << num.lenNumerator << endl;
	for (int i = 0; i < num.lenNumerator; i++) {
		cout << num.numerator[i];
	}
	cout << endl;
	cout << num.lenDenominator << endl;
	for (int i = 0; i < num.lenDenominator; i++) {
		cout << num.denominator[i];
	}*/
	

	/*int NUMarr1[] = { 3,0,1 };
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
	}*/


	Fractions frac1, frac2, fracRes;

	frac1.lenNumerator = 2;
	frac2.lenNumerator = 2;
	frac1.lenDenominator = 3;
	frac2.lenDenominator = 3;

	frac1.sign = 1;
	frac2.sign = 1;

	frac1.numerator = new int[frac1.lenNumerator];
	frac2.numerator = new int[frac2.lenNumerator];
	frac1.denominator = new int[frac1.lenDenominator];
	frac2.denominator = new int[frac1.lenDenominator];

	frac1.numerator[0] = 1;
	frac1.numerator[1] = 2;

	frac2.numerator[0] = 9;
	frac2.numerator[1] = 9;

	frac1.denominator[0] = 9;
	frac1.denominator[1] = 9;
	frac1.denominator[2] = 8;

	frac2.denominator[0] = 9;
	frac2.denominator[1] = 9;
	frac2.denominator[2] = 9;

	fracRes = DIV_QQ_Q(frac1, frac2);

	for (int i = 0; i < fracRes.lenNumerator; ++i) {
		cout << fracRes.numerator[i];
	}
	cout << "\n";

	for (int i = 0; i < fracRes.lenDenominator; ++i) {
		cout << fracRes.denominator[i];
	}

}
    


	



