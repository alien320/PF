#include <stdio.h>
#include <locale.h>
#include <time.h>

int arr[200];

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	// Заполнение массива случайными числами
	for (int i = 0; i < 200; i++)
	{
		arr[i] = rand() % 101;
	}

	// Вывод елементов массива
	for (int i = 0; i < 200; i++)
	{
		printf("%-4d", arr[i]);
	}
	printf("\n\n");

	/*Подсчет количества участков,
	которые образуют непрерывные последовательности
	чисел с неуменьшающимися значениями*/
	int i, j, k = 0, n = 0;
	for (i = 0; i < 199; i++)
	{
		j = i + 1;
		if (arr[i] <= arr[j])
		{
			k++;
			if (i == 198)
				n++;
		}
		else if (k > 0)
		{
			n++;
			k = 0;
		}
	}

	printf("Количество последовательностей чисел с неуменьшающимися значениями: %d\n", n);

	return 0;
}