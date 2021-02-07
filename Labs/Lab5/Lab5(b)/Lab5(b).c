#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru");

	unsigned int k;
	printf("Количество грибов: ");
	scanf_s("%d", &k);
	printf("У меня %u гриб", k);

	if ((k % 10 == 1) && (k % 100 != 11)) {
		printf("\n");
	}
	else if ((k % 10 == 2) && (k % 100 != 12)) {
		printf("а\n");
	}
	else if ((k % 10 == 3) && (k % 100 != 13)) {
		printf("а\n");
	}
	else if ((k % 10 == 4) && (k % 100 != 14)) {
		printf("а\n");
	}
	else {
		printf("ов\n");
	}

	return 0;
}