#include <stdio.h>
#include <locale.h>

void reorganize()
{
	int n;
	scanf_s("%d", &n);

	if (n > 0)
	{
		reorganize();
		printf("%d ", n);
	}
	else printf("0 ");
}

void main()
{
	setlocale(LC_ALL, "ru");

	printf(" Введите последовательность чисел: ");

	reorganize();
	printf("\n");
}