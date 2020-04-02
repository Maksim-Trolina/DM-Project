
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput) {

	if (digit == 0) {
		lenOutput = 1;
		int* newNumber = new int[lenOutput];
		newNumber[0] = 0;
		return newNumber;
	}

	int flag = 0;
	int* newNumber = new int[lenNumber + 1];
	for (int i = lenNumber - 1; i >= 0; i--) {
		newNumber[i] = (number[i] * digit + flag) % 10;
		flag = (number[i] * digit + flag) / 10;
	}
	if (flag != 0) {
		lenNumber++;
		for (int i = lenNumber - 1; i > 0; i--) {
			newNumber[i] = newNumber[i - 1];
		}
		newNumber[0] = flag;
	}

	lenOutput = lenNumber;
	return newNumber;
}