#include <iostream>

using namespace std;

//fractions number structure
struct Fractions
{
	int* numerator;
	int* denominator;
	int sign;
	int lenNumerator;
	int lenDenominator;
};



//Compare the digits starting from the highest (�������)
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Multiplies a number by a digit (������������)
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput);

//Multiplies a positive integer by 10 ^ k (���������)
int* MUL_Nk_N(int lenNumber, int number[], int power, int& lenOutput);

//Add of two numbers (���������)
int* ADD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Check for zero (������)
bool NZER_N_B(int number[]);

//Subtract a two numbers (�������)
int* SUB_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Ading a unit to a natural number (�����)
int* ADD_1N_N(int lenNumber, int number[], int& lenOutput);

//Multiplication of natural numbers (��������)
int* MUL_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Multiplies a number by a number (������������)
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput);

//Multiplies the number by 10 ^ k (���������)
int* MUL_Nk_N(int lenNumber, int number[], int power, int& lenOutput);

//Compares two numbers (�������)
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//The first digit of dividing a larger number by a smaller one (������)
int DIV_NN_Dk(int lenNumber1, int lenNumber2, int number1[], int number2[], int& position);

//Subtract a natural other natural multiplied by a digit (�������)
int* SUB_NDN_N(int lenNumber1, int lenNumber2, int& lenOutput, int digit, int number1[], int number2[]);

//The ratio of dividing a larger by a smaller or equal  (���������)
int* DIV_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Remainder of division (������������)
int* MOD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//�hange of sign (�����)
void MUL_ZM_Z(int& sign,int number[]);

//Finds the sum of integers (��������)
int* ADD_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Integer multiplication (������������)
int* MUL_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Integer check (���������)
bool INT_Q_B(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Integer division (���������)
int* DIV_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Greatest common factor (�����)
int* GCF_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Fraction reduction (��������)
void RED_Q_Q(int lenNumerator, int lenDenominator, int& lenOutputNumerator, int& lenOutputDenominator,
	 int numerator[], int denominator[], int numeratorOutput[], int denominatorOutput[]);

//Substract two integers (������)
Fractions SUB_ZZ_Z(Fractions number1,Fractions number2);

//Least common multiple (�����)
int* LCM_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Sum of fractions (�����)
Fractions ADD_QQ_Q(Fractions num1, Fractions num2);

//Multiplication of rational fractions (������)
Fractions MUL_QQ_Q(Fractions frac1, Fractions frac2);

//Dividing of rational fractions (�������)
Fractions DIV_QQ_Q(Fractions frac1, Fractions frac2);

//Multiplying a polynomial by a rational number (�������)
Fractions* MUL_PQ_P(Fractions* polinom, Fractions coef, int lenPolinom);

//Derivative of a polynomial (�������)
Fractions* DER_P_P(Fractions* polinom, int lenPoliom, int& lenPolinomOutput);

//Multiplying a polynomial by x^k (�������)
Fractions* MUL_Pxk_P(Fractions* polinom, int lenPol, int k, int& lenPolOutput);

//Remainder of dividing a larger integer by a smaller (������������)
Fractions MOD_ZZ_Z(Fractions num1, Fractions num2);

//Polynomial addition (���������)
Fractions* ADD_PP_P(Fractions nums1[], Fractions nums2[], int lenNums1, int lenNums2, int& lenOutput);

//Fills the polynomial with rational coefficients 
Fractions* PolynomialFilling(int lenPolinom);

//The imposition of polynomial LCM of denominators of coefficients and the GCD of the numerators (�������)
Fractions* FAC_P_Q(Fractions* polinom, int lenPolinom);

//Multypling two polynoms (�������)
Fractions* MUL_PP_P(Fractions* pol1, Fractions* pol2, int lenPol1, int lenPol2, int& lenPolOutput);

//Polymonial substract (�������)
Fractions* SUB_PP_P(Fractions pol1[], Fractions pol2[], int lenPol1, int lenPol2, int& lenPolOutput);

//Prints polynomial
void PolynomialReading(Fractions nums[], int lenNums);

//Draws a start menu
void StartMenu();

//Draws menu for natural numbers
void NaturalNumbersMenu();

//Draws menu for integer numbers
void IntegerNumberMenu();

//Redraws the current menu
void Again(void (function)());

//Draws menu for rational numbers
void RationalNumberMenu();

//Draws menu for polynomals
void PolynomalMenu();

//Checks the number for naturalness
bool CheckForNatural(string number,int& sign);

//Checks a number for an integer
bool CheckForInteger(string number, int& sign);

//Checks the number for rationality
bool CheckForRational(string number, int& sign);

//Returns a number
string RequestNumber(bool (check)(string, int&), int& sign);

//Converts a string to a number
int* StringToNumber(string number, int start, int end);

//Calculates the difference between two fractions (�����)
Fractions SUB_QQ_Q(Fractions number1, Fractions number2);

//Returns polynomial
Fractions* RequestNumbers(string context, int& lenOutput);

//Dividing two polynoms (�������)
Fractions* DIV_PP_P(Fractions pol1[], Fractions pol2[], int lenPol1, int lenPol2, int& lenPolOutput);

//Remainder of division of two polynoms (�������)
Fractions* MOD_PP_P(Fractions pol1[], Fractions pol2[], int lenPol1, int lenPol2, int& lenPolOutput);

//GCF of two polynoms (�������)
Fractions* GCF_PP_P(Fractions* pol1, Fractions* pol2, int lenPol1, int lenPol2, int& lenRes);

//The transformation of the polynomial � time roots in the simple (�������)
Fractions* NMR_P_P(Fractions* pol, int lenPol, int& lenPolOutput);