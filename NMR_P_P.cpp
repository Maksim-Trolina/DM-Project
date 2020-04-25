#include "Modules.h"

Fractions* NMR_P_P(Fractions* pol, int lenPol, int& lenPolOutput) {
	int lenDerPol;
	Fractions* derPol = DER_P_P(pol, lenPol, lenDerPol);
	
	int lenGcf;
	Fractions* gcf = GCF_PP_P(derPol, pol, lenDerPol, lenPol, lenGcf);

	int lenDiv;
	Fractions* div = DIV_PP_P(pol, gcf, lenPol, lenGcf, lenDiv);
	lenPolOutput = lenDiv;
	Fractions* res = FAC_P_Q(div, lenDiv);
	return res;
}