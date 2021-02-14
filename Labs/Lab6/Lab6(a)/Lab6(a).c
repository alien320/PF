#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int random_number, your_number, attempts;
	random_number = rand() % 100;

	printf("Угадайте число, которое сгенерировал компьютер: ");

	for (attempts = 1; attempts < 100; attempts++)
	{
		scanf_s("%d", &your_number);
		if (your_number > random_number)
		{
			printf("Число компьютера меньше, попробуйте еще раз: ");
		}
		else if (your_number < random_number)
		{
			printf("Число компьютера больше, попробуйте еще раз: ");
		}
		else
		{
			printf("Вы угадали число с %d-го раза\n", attempts);
			break;
		}
	}

	return 0;
}