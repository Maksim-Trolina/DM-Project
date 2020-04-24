#include "Modules.h"

Fractions* GCF_PP_P(Fractions* pol1, Fractions* pol2, int lenPol1, int lenPol2, int& lenRes) {

	int len1 = lenPol1;
	int len2 = lenPol2;

	len1--;

	while (len1 >= 0 && pol1[len1].numerator[0] == 0) {
		len1--;
	}

	len2--;

	while (len2 >= 0 && pol2[len2].numerator[0] == 0) {
		len2--;
	}
}