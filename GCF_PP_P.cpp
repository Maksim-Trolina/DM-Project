#include "Modules.h"

Fractions* GCF_PP_P(Fractions* pol1, Fractions* pol2, int lenPol1, int lenPol2, int& lenRes) {

	int len1 = 0;
	int len2 = 0;
	int flag = 0;

	Fractions* pol1Copy = new Fractions[lenPol1];
	Fractions* pol2Copy = new Fractions[lenPol2];

	for (int i = 0; i < lenPol1; i++) {
		pol1Copy[i] = pol1[i];
	}
	
	for (int i = 0; i < lenPol2; i++) {
		pol2Copy[i] = pol2[i];
	}

	while (len1 <lenPol1 && pol1Copy[len1].numerator[0] == 0) {
		len1++;
	}


	while (len2 < lenPol2 && pol2Copy[len2].numerator[0] == 0) {
		len2++;
	}

	len1 = lenPol1 - len1;
	len2 = lenPol2 - len2;

	if (len1 > len2) {
		flag = 1;
	}

	if (len1 < len2) {
		flag = 2;
	}

	if (flag == 0) {
		Fractions a;
		for (int i = len1, j = len2; i < lenPol1 && j < lenPol2; i++, j++) 
		{
			a = SUB_QQ_Q(pol1Copy[i], pol2Copy[j]);
			if (a.numerator[0] != 0) {
				if (a.sign == 0) {
					flag = 1;
				}
				else {
					flag = 2;
				}
				break;
			}
		}
	}
	Fractions* divider;
	Fractions* rem;
	Fractions* remTemp;
	int lenDiv;
	int lenRem;
	int lenRemTemp;

	if (flag < 2) {
		divider = pol1Copy;
		rem = pol2Copy;
		lenDiv = lenPol1;
		lenRem = lenPol2;
		lenRemTemp = lenPol2;
	}
	else {
		divider = pol2Copy;
		rem = pol1Copy;
		lenDiv = lenPol2;
		lenRem = lenPol1;
		lenRemTemp = lenPol1;
	}

	remTemp = new Fractions[lenRem];
	int count;

	do {
	
		count = 0;
		for (int i = 0; i < lenRem; i++) {
			if (rem[i].numerator[0] == 0) {
				count++;
			}
		}
		if (count == lenRem) {
			break;
		}

		for (int i = 0; i < lenRem; i++) {
			remTemp[i] = rem[i];
		}

		lenRemTemp = lenRem;

		rem = MOD_PP_P(divider, rem, lenDiv, lenRem, lenRem);

		for (int i = 0; i < lenRemTemp; i++) {
			divider[i] = remTemp[i];
		}

		lenDiv = lenRemTemp;

	} while (true);

	lenRes = lenDiv;

	Fractions* result = FAC_P_Q(divider, lenRes);

	return result;

	/*Fractions* pol1Copy;
	Fractions* pol2Copy;
	int lenPol1Copy;
	int lenPol2Copy;

	Fractions* ost;
	int lenOst;

	int nonZeroPos = 0;
	while (pol1[nonZeroPos].numerator[0] == 0 && nonZeroPos < lenPol1 - 1) {
		nonZeroPos++;
	}
	lenPol1Copy = lenPol1 - nonZeroPos;
	pol1Copy = new Fractions[lenPol1Copy];
	for (int i = 0; i < lenPol1Copy; ++i) {
		pol1Copy[i] = pol1[i + nonZeroPos];
	}

	nonZeroPos = 0;
	while (pol2[nonZeroPos].numerator[0] == 0 && nonZeroPos < lenPol2 - 1) {
		nonZeroPos++;
	}
	lenPol2Copy = lenPol2 - nonZeroPos;
	pol2Copy = new Fractions[lenPol2Copy];
	for (int i = 0; i < lenPol2Copy; ++i) {
		pol2Copy[i] = pol2[i + nonZeroPos];
	}
	int lenNul = 1;
	Fractions* nul = new Fractions[lenNul];
	nul[0].lenNumerator = 1;
	nul[0].lenDenominator = 1;
	nul[0].sign = 0;
	nul[0].numerator = new int[nul[0].lenNumerator];
	nul[0].denominator = new int[nul[0].lenDenominator];
	nul[0].numerator[0] = 0;
	nul[0].denominator[0] = 1;*/

}