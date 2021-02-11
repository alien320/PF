#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	printf("Решите следующие примеры:\n");

    int a, b, c, n, check, points = 0;
	for (n = 0; n < 10; n++)
	{
		a = rand() % 10;
		b = rand() % 10;
		printf("%d * %d = ", a, b);
		scanf_s("%d", &c);

		check = a * b;
		if (check == c)
		{
			points += 1;
		}
	}

	printf("Результат: %d/%d\n", points, n);

	return 0;
}