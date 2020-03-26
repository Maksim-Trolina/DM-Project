bool* NZER_N_B(int number[])
{
	bool flag;
	if (number)
		flag = true;
	else
		flag = false;

	bool* CheckForZero = &flag;

	return CheckForZero;
}