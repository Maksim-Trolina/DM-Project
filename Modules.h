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



//Compare the digits starting from the highest (Каримов)
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Multiplies a number by a digit (Новокрещенов)
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput);

//Multiplies a positive integer by 10 ^ k (Поспелова)
int* MUL_Nk_N(int lenNumber, int number[], int power, int& lenOutput);

//Add of two numbers (Бобринева)
int* ADD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Check for zero (Ткачук)
bool NZER_N_B(int number[]);

//Subtract a two numbers (Каримов)
int* SUB_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Ading a unit to a natural number (Кулик)
int* ADD_1N_N(int lenNumber, int number[], int& lenOutput);

//Multiplication of natural numbers (Скворцов)
int* MUL_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Multiplies a number by a number (Новокрещенов)
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput);

//Multiplies the number by 10 ^ k (Поспелова)
int* MUL_Nk_N(int lenNumber, int number[], int power, int& lenOutput);

//Compares two numbers (Каримов)
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//The first digit of dividing a larger number by a smaller one (Ткачук)
int DIV_NN_Dk(int lenNumber1, int lenNumber2, int number1[], int number2[], int& position);

//Subtract a natural other natural multiplied by a digit (Каримов)
int* SUB_NDN_N(int lenNumber1, int lenNumber2, int& lenOutput, int digit, int number1[], int number2[]);

//The ratio of dividing a larger by a smaller or equal  (Бобринева)
int* DIV_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Remainder of division (Новокрещенов)
int* MOD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Сhange of sign (Кулик)
void MUL_ZM_Z(int& sign,int number[]);

//Finds the sum of integers (Скворцов)
int* ADD_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Integer multiplication (Новокрещенов)
int* MUL_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Integer check (Поспелова)
bool INT_Q_B(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Integer division (Бобринева)
int* DIV_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Greatest common factor (Кулик)
int* GCF_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Fraction reduction (Скворцов)
void RED_Q_Q(int lenNumerator, int lenDenominator, int& lenOutputNumerator, int& lenOutputDenominator,
	 int numerator[], int denominator[], int numeratorOutput[], int denominatorOutput[]);

//Substract two integers (Ткачук)
Fractions SUB_ZZ_Z(Fractions number1,Fractions number2);

//Least common multiple (Кулик)
int* LCM_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Sum of fractions (Кулик)
Fractions ADD_QQ_Q(Fractions num1, Fractions num2);

//Multiplication of rational fractions (Ткачук)
Fractions MUL_QQ_Q(Fractions frac1, Fractions frac2);

//Dividing of rational fractions (Каримов)
Fractions DIV_QQ_Q(Fractions frac1, Fractions frac2);

//Multiplying a polynomial by a rational number (Каримов)
Fractions* MUL_PQ_P(Fractions* polinom, Fractions coef, int lenPolinom);

//Derivative of a polynomial (Каримов)
Fractions* DER_P_P(Fractions* polinom, int lenPoliom, int& lenPolinomOutput);

//Multiplying a polynomial by x^k (Каримов)
Fractions* MUL_Pxk_P(Fractions* polinom, int lenPol, int k, int& lenPolOutput);

//Remainder of dividing a larger integer by a smaller (Новокрещенов)
Fractions MOD_ZZ_Z(Fractions num1, Fractions num2);

//Polynomial addition (Поспелова)
Fractions* ADD_PP_P(Fractions nums1[], Fractions nums2[], int lenNums1, int lenNums2, int& lenOutput);

//Fills the polynomial with rational coefficients 
Fractions* PolynomialFilling(int lenPolinom);

//The imposition of polynomial LCM of denominators of coefficients and the GCD of the numerators (Каримов)
Fractions* FAC_P_Q(Fractions* polinom, int lenPolinom);

//Multypling two polynoms (Каримов)
Fractions* MUL_PP_P(Fractions* pol1, Fractions* pol2, int lenPol1, int lenPol2, int& lenPolOutput);

//Polymonial substract (Каримов)
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

//Calculates the difference between two fractions (Кулик)
Fractions SUB_QQ_Q(Fractions number1, Fractions number2);

//Returns polynomial
Fractions* RequestNumbers(string context, int& lenOutput);

//Dividing two polynoms (Каримов)
Fractions* DIV_PP_P(Fractions pol1[], Fractions pol2[], int lenPol1, int lenPol2, int& lenPolOutput);

//Remainder of division of two polynoms (Каримов)
Fractions* MOD_PP_P(Fractions pol1[], Fractions pol2[], int lenPol1, int lenPol2, int& lenPolOutput);

//GCF of two polynoms (Каримов)
Fractions* GCF_PP_P(Fractions* pol1, Fractions* pol2, int lenPol1, int lenPol2, int& lenRes);

//The transformation of the polynomial — time roots in the simple (Каримов)
Fractions* NMR_P_P(Fractions* pol, int lenPol, int& lenPolOutput);