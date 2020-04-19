//fractions number structure
struct Fractions
{
	int* numerator;
	int* denominator;
	int sign;
	int lenNumerator;
	int lenDenominator;
};



//Compare the digits starting from the highest
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Multiplies a number by a digit
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput);

//Multiplies a positive integer by 10 ^ k
int* MUL_Nk_N(int lenNumber, int number[], int power, int& lenOutput);

//Add of two numbers
int* ADD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Check for zero
bool NZER_N_B(int number[]);

//Subtract a two numbers
int* SUB_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Ading a unit to a natural number
int* ADD_1N_N(int lenNumber, int number[], int& lenOutput);

//Multiplication of natural numbers
int* MUL_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Multiplies a number by a number
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput);

//Multiplies the number by 10 ^ k
int* MUL_Nk_N(int lenNumber, int number[], int power, int& lenOutput);

//Compares two numbers
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//The first digit of dividing a larger number by a smaller one
int DIV_NN_Dk(int lenNumber1, int lenNumber2, int number1[], int number2[], int& position);

//Subtract a natural other natural multiplied by a digit
int* SUB_NDN_N(int lenNumber1, int lenNumber2, int& lenOutput, int digit, int number1[], int number2[]);

//The ratio of dividing a larger by a smaller or equal
int* DIV_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Remainder of division
int* MOD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Ñhange of sign
void MUL_ZM_Z(int& sign,int number[]);

//Finds the sum of integers
int* ADD_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Integer multiplication
int* MUL_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Integer check
bool INT_Q_B(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Integer division
int* DIV_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Greatest common factor
int* GCF_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Fraction reduction
void RED_Q_Q(int lenNumerator, int lenDenominator, int& lenOutputNumerator, int& lenOutputDenominator,
	 int numerator[], int denominator[], int numeratorOutput[], int denominatorOutput[]);

//Substract two integers
Fractions SUB_ZZ_Z(Fractions number1,Fractions number2);

//Least common multiple
int* LCM_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Sum of fractions
void ADD_QQ_Q(int NUMlennumber1, int DENlennumber1, int NUMlennumber2, int DENlennumber2, int sign1, int sign2, int& signOutputanswer, int& NUMlenOutput, int& DENlenOutput, int NUMnumber1[], int DENnumber1[], int NUMnumber2[], int DENnumber2[], int** NUMnewnumber, int** DENnewnumber);

//Multiplication of rational fractions
Fractions MUL_QQ_Q(Fractions frac1, Fractions frac2);

//Dividing of rational fractions
Fractions DIV_QQ_Q(Fractions frac1, Fractions frac2);

//Multiplying a polynomial by a rational number
Fractions* MUL_PQ_P(Fractions* polinom, Fractions coef, int degPolinom);

//Derivative of a polynomial
Fractions* DER_P_P(Fractions* polinom, int degPoliom, int& degPolinomOutput);

//Multiplying a polynomial by x^k
Fractions* MUL_Pxk_P(Fractions* polinom, int degPol, int k, int& degPolOutput);

//Remainder of dividing a larger integer by a smaller
Fractions MOD_ZZ_Z(Fractions num1, Fractions num2);

//Polynomial addition
Fractions* ADD_PP_P(Fractions nums1[], Fractions nums2[], int lenNums1, int lenNums2, int& lenOutput);

//Fills the polynomial with rational coefficients
Fractions* PolynomialFilling(int lenPolinom);