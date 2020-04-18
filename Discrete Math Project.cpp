#include <iostream>
#include "Modules.h"
#include <algorithm>

using namespace std;

int main()
{
	Fractions* nums = new Fractions[2];

	for (int i = 0; i < 2; i++) {
		cin >> nums[i].sign;
		cin >> nums[i].lenNumerator;
		for (int j = 0; j < nums[j].lenNumerator; j++) {
			cin >> nums[i].numerator[j];
		}
		cin >> nums[i].lenDenominator;
		for (int j = 0; j < nums[i].lenDenominator; j++) {
			cin >> nums[i].denominator[j];
		}
	}
	Fractions numb;
	cin >> numb.sign;
	cin >> numb.lenNumerator;
	for (int i = 0; i < numb.lenNumerator; i++) {
		cin >> numb.numerator[i];
	}
	cin >> numb.lenDenominator;
	for (int i = 0; i < numb.lenDenominator; i++) {
		cin >> numb.denominator[i];
	}

	 nums = MUL_PQ_P(nums, numb, 2);


	for (int i = 0; i < 2; i++) {
		cout<< nums[i].sign<<endl;
		cout << nums[i].lenNumerator << endl;
		for (int j = 0; j < nums[j].lenNumerator; j++) {
			cout<<nums[i].numerator[j];
		}
		cout << nums[i].lenDenominator << endl;
		for (int j = 0; j < nums[i].lenDenominator; j++) {
			cout<< nums[i].denominator[j];
		}
	}
	

}
    