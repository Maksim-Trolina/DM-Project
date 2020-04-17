#include <iostream>
#include "Modules.h"

using namespace std;

int main()
{
	int degPol = 2;
	Fractions* coefs = new Fractions[degPol + 1];
	
	coefs[0].lenNumerator = 1;
	coefs[1].lenNumerator = 1;
	coefs[2].lenNumerator = 1;

	coefs[0].lenDenominator = 1;
	coefs[1].lenDenominator = 1;
	coefs[2].lenDenominator = 1;

	coefs[0].sign = 0;
	coefs[1].sign = 0;
	coefs[2].sign = 0;

	coefs[0].numerator = new int[coefs[0].lenNumerator];
	coefs[1].numerator = new int[coefs[1].lenNumerator];
	coefs[2].numerator = new int[coefs[2].lenNumerator];

	coefs[0].denominator = new int[coefs[0].lenDenominator];
	coefs[1].denominator = new int[coefs[1].lenDenominator];
	coefs[2].denominator = new int[coefs[2].lenDenominator];

	coefs[0].numerator[0] = 9;
	coefs[1].numerator[0] = 3;
	coefs[2].numerator[0] = 7;

	coefs[0].denominator[0] = 4;
	coefs[1].denominator[0] = 2;
	coefs[2].denominator[0] = 1;

	/*Fractions* resPol = MUL_PQ_P(coefs, coefs[2], degPol);

	for (int i = 0; i < degPol + 1; ++i) {
		for (int j = 0; j < resPol[i].lenNumerator; ++j) {
			cout << resPol[i].numerator[j];
		}
		cout << "\n";
	}*/

	/*int degDerPol;
	Fractions* derPol = DER_P_P(coefs, degPol, degDerPol);

	for (int i = 0; i < degDerPol + 1; ++i) {
		for (int j = 0; j < derPol[i].lenNumerator; ++j) {
			cout << derPol[i].numerator[j];
		}
		cout << " ";
	}
	cout << "\n";
	for (int i = 0; i < degDerPol + 1; ++i) {
		for (int j = 0; j < derPol[i].lenDenominator; ++j) {
			cout << derPol[i].denominator[j];
		}
		cout << " ";
	}*/

	/*Fractions res = MUL_QQ_Q(coefs[0], coefs[1]);

	for (int i = 0; i < res.lenNumerator; ++i) {
		cout << res.numerator[i];
	}*/

	int degPolRes;
	Fractions* resPol = MUL_Pxk_P(coefs, degPol, 5, degPolRes);
	for (int i = 0; i < degPolRes + 1; ++i) {
		for (int j = 0; j < resPol[i].lenNumerator; ++j) {
			cout << resPol[i].numerator[j];
		}
		cout << "\n";
	}
}
    