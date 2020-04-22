#include <iostream>

using namespace std;

bool CheckForInteger(string number,int& sign) {
	
	if (number.length() == 0) {
		return false;
	}

	if (number[0] == '0' && number.length() > 1) {
		return false;
	}

	int start = 0;
	sign = 0;

	if (number[0] == '-' && number.length() > 1) {
		start = 1;
		sign = 1;
	}

	for (int i = start; i < number.length(); i++) {
		if ((int)number[i] < 48 || (int)number[i]>57) {
			return false;
		}
	}

	return true;
}