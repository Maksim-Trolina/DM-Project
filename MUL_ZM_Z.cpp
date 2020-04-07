#include "Modules.h"

void MUL_ZM_Z(int& sign,int number[]) {

	if (sign == 0 && NZER_N_B(number)) {
		sign = 1;
	}
	else {
		sign = 0;
	}
}