#include <iostream>
#include "Modules.h"

using namespace std;


bool CheckForRational(string number, int& sign) {
	
	string numerator = "";
	string denominator = "";
	sign = 0;
	int start = 0;

	if (number.length() < 5) {
		return false;
	}

	if (number[start] != '(') {

		return false;
	}

	if (number[number.length() - 1] != ')') {
		return false;
	}
	start++;
	for (start; start < number.length() && number[start] != '/'; start++) {

		numerator += number[start];	
	}

	if (!CheckForInteger(numerator,sign)) {
		return false;
	}

	if (start == number.length()) {
		return false;
	}

	if (number[start] != '/') {
		return false;
	}

	start++;


	for (start; start < (int)number.length()-1; start++) {

		denominator += number[start];
	}
	int a;
	if (!CheckForNatural(denominator,a)) {
		return false;
	}

	return true;

}