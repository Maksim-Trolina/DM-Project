
int* ADD_1N_N(int n, int A[], bool *flag) {

	int i = n - 1;
	
	A[i] += 1;

	if (A[i] > 9) {

		while (A[i] > 8) {
			A[i] = 0;
			i--;
			if (i < 0) {

				*flag = true;
				int* newA = new int[n + 1];

				newA[0] = 1;
				for (int j = 1; j < (n + 1); j++) {

					newA[j] = 0;
				}
				return newA;
			}
		}
		A[i] += 1;
	}
	return A;
}

