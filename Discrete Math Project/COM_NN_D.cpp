
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]) {

	if (lenNumber1 > lenNumber2) {
		return 2;
	}
	else if (lenNumber1 < lenNumber2) {
		return 1;
	}
	else {
		for (int i = 0; i < lenNumber1; ++i) {		
			if (number1[i] > number2[i]) {
				return 2;
			}
			if (number1[i] < number2[i]) {
				return 1;
			}
		}
	}

	return 0;
}