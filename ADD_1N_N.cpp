#include <iostream>

using namespace std;

int* ADD_1N_N(int lenNumber, int number[], int& lenOutput) {

	int* newNumber = new int[lenNumber + 1];
	lenOutput = lenNumber;

	for (int i = 0; i < lenNumber - 1; i++) {
		newNumber[i] = number[i];
	}

	newNumber[lenNumber - 1] = number[lenNumber - 1] + 1;
	int index = lenNumber - 1;
	while (index>0 && newNumber[index] == 10) {
		newNumber[index] = 0;
		index--;
		newNumber[index]++;
	}

	if (newNumber[index] == 10) {
		newNumber[lenNumber] = 0;
		lenOutput = (lenNumber + 1);
		newNumber[0] = 1;
	}
	return newNumber;

}