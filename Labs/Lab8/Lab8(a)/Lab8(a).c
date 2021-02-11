#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char answer[4];
	int smokers = 0;
	int nonsmokers = 5;

	for (int i = 0; i < 10;)
	{
		// Вопрос авиадиспетчера
		printf("Авиадиспетчер: Курите?\n");
		scanf_s("%s", &answer, 4);

		// Бронирование мест
		if ((answer[0] == 'Д') && (answer[1] == 'А') && (smokers < 5)) // для курильщиков
		{
			smokers++;
			i++;
			printf("Авиадиспетчер: Для вас было забронировано место № %d\n", smokers);

			if (smokers == 5)
				printf("Свободных мест в первом секторе больше нет\n");
		}

		else if ((answer[0] == 'Н') && (answer[1] == 'Е') && (answer[2] == 'Т') && (nonsmokers < 10)) // для всех остальных
		{
			nonsmokers++;
			i++;
			printf("Авиадиспетчер: Для вас было забронировано место № %d\n", nonsmokers);

			if (nonsmokers == 10)
				printf("Свободных мест во втором секторе больше нет\n");
		}
	}

 	return 0;
 }