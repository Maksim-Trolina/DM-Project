#include <iostream>

using namespace std;

int* ADD_1N_N(int lenNumber, int number[], int& lenOutput) {

	int index = lenNumber - 1;
	int* newNumber = new int[lenNumber];
	for (int i = 0; i < lenNumber; i++) {
		newNumber[i] = number[i];
	}

	while (index >= 0 && newNumber[index] > 8) {
		newNumber[index] = 0;
		index--;
	}
	if (index >= 0) {
		newNumber[index]++;
		return newNumber;
	}
	lenOutput++;
	int* newnewNumber = new int[lenOutput];
	newnewNumber[0] = 1;
	for (int i = 1; i < lenOutput; i++) {
		newnewNumber[i] = 0;
	}
	return newnewNumber;

}