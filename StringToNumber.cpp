#include <iostream>

using namespace std;

int* StringToNumber(string number,int start,int end) {

	int* num = new int[end - start + 1];

	for (int i = start; i <= end; i++) {

		num[i - start] = number[i] - '0';
	}

	return num;
}