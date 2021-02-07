#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(void) {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char sur1[7], sur2[9], sur3[12], init1[5], init2[5], init3[5];
	int bd1, bd2, bd3;
	double sal1, sal2, sal3;

	printf(" Введите фамилию, инициалы, год рождения, оклад: ");
	scanf_s("%s %s %d %lf", &sur1, 7, &init1, 5, &bd1, &sal1);
	printf(" Введите фамилию, инициалы, год рождения, оклад: ");
	scanf_s("%s %s %d %lf", &sur2, 9, &init2, 5, &bd2, &sal2);
	printf(" Введите фамилию, инициалы, год рождения, оклад: ");
	scanf_s("%s %s %d %lf", &sur3, 12, &init3, 5, &bd3, &sal3);

	printf("  -------------------------------------------- \n");
	printf(" | Отдел кадров                               |\n");
	printf(" |--------------------------------------------|\n");
	printf(" | Фамилия     | Инициалы | Год рожд | Оклад  |\n");
	printf("  --------------------------------------------\n");
	printf(" | %-11s | %-8s | %-8d | %-4.2lf |\n", sur1, init1, bd1, sal1);
	printf(" | %-11s | %-8s | %-8d | %-4.2lf |\n", sur2, init2, bd2, sal2);
	printf(" | %-11s | %-8s | %-8d | %-4.2lf |\n", sur3, init3, bd3, sal3);
	printf("  -------------------------------------------- \n");
	printf(" | Примечание: оклад установлен по состоянию  |\n");
	printf(" | на 1 января 2000 года                      |\n");
	printf("  -------------------------------------------- \n");

	return 0;
}