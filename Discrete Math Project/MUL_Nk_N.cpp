
int* MUL_Nk_N(int lenNumber, int number[], int power,int &lenOutput) {
	
	int* newNumber = new int[lenNumber + power];
	for (int i = 0; i < lenNumber;i++) {
		newNumber[i] = number[i];
	}
	for (int i = lenNumber; i < lenNumber + power; i++) {
		newNumber[i] = 0;
	}
	lenOutput += power;
	return newNumber;
}