#include <stdio.h>
#include <locale.h>

int num()
{
	int n;
	scanf_s("%d", &n);

	if (n > 0)
	{
		num();
		printf("%d ", n);
	}
	else
	{
		printf("0 ");
	}
}

void main()
{
	setlocale(LC_ALL, "ru");

	printf("Введите последовательность чисел: ");
	num();
	printf("\n");
}