#include <stdio.h>
#include <locale.h>
#include <time.h>

#define A1 7
#define A2 8

void fill_array (int arr[A1][A2])
{
	srand(time(NULL));

	for (int i = 0; i < A1; i++)
	{
		for (int j = 0; j < A2; j++)
		{
			arr[i][j] = rand() % 101 - 50;
		}
	}
}

void print_array(int arr[A1][A2])
{
	for (int i = 0; i < A1; i++)
	{
		for (int j = 0; j < A2; j++)
		{
			printf(" %3d ", arr[i][j]);
		}
		printf("\n");
	}
}

int check(int arr[A1][A2], int row)
{
	int n = 0;
	for (int i = 0; i < A2; i++)
		if (arr[row][i] > 0) n++;

	return n;
}

void main ()
{
	setlocale(LC_ALL, "ru");
	int arr[A1][A2];

	fill_array(arr);
	print_array(arr);

	printf(" Количество положительных чисел в каждой строке массива:\n");
	for (int i = 0; i < A1; i++)
		printf(" %d) %d\n", i + 1, check(arr, i));
}