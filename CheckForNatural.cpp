#include <iostream>

using namespace std;
bool CheckForNatural(string number,int& sign) {

	sign = 0;

	if (number.length() == 0) {
		return false;
	}
	if (number[0] == '0') {
		return false;
	}

	for (int i = 0; i < number.length(); i++) {
		if ((int)number[i] < 48 || (int)number[i]>57) {
			return false;
		}
	}

	return true;
}