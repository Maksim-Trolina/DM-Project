//Compare the digits starting from the highest
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Multiplies a number by a digit
int* MUL_ND_N(int lenNumber, int number[], int digit,int &lenOutput);

//Multiplies a positive integer by 10 ^ k
int* MUL_Nk_N(int lenNumber, int number[], int power,int &lenOutput);

//Add of two numbers
int* ADD_NN_N(int lenNumber1, int lenNumber2, int &lenOutput, int number1[], int number2[]);//Check for zero
int* NZER_N_B(int number[]);