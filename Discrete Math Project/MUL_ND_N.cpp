
int* MUL_ND_N(int lenNumber,int number[], int digit) {

	int flag = 0;
	int currentDigit;
	for (int i = lenNumber - 1; i >= 0; i--) {
		currentDigit = number[i];
		number[i] = (number[i] * digit + flag) % 10;
		flag = (currentDigit * digit + flag) / 10;
	}
	if (flag != 0) {
		int* newNumber = new int[lenNumber + 1];
		newNumber[0] = flag;
		for (int i = 0; i < lenNumber; i++) {
			newNumber[i + 1] = number[i];
		}
		return newNumber;
	}
	return number;
}