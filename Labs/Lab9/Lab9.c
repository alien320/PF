#include <stdio.h>
#define S 9

int A[S][S];

int main()
{
	int k, n = 1, j, r, l;

	for (k = 1; k <= 4; k++)
	{
		for (j = k - 1; j < S - k + 1; j++) A[k - 1][j] = n++;

		for (j = k; j < S - k + 1; j++) A[j][S - k] = n++;

		for (j = S - k - 1; j >= k - 1; --j) A[S - k][j] = n++;

		for (j = S - k - 1; j >= k; j--) A[j][k - 1] = n++;
	}

	A[4][4] = S * S;

	for (l = 0; l < S; l++)
	{
		for (r = 0; r < S; r++)
		{
			printf("%3d", A[l][r]);
		}
		printf("\n");
	}

	return 0;
}
