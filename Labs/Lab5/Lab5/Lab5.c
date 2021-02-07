#include <stdio.h>
#include <locale.h>

int main(void) {
	double x, y;

	setlocale(LC_ALL, "ru");
	printf("Введите координату х: ");
	scanf_s("%lf", &x);
	printf("Введите координату у: ");
	scanf_s("%lf", &y);

	printf("\nВведенные значения: \nx = %.2lf \ny = %.2lf\n", x, y);

	if ((x * x + y * y <= 1) || ((y >= -1) && (y <= 1) && (x >= 0) && (x <= 1)))
		printf("Точка попадает в область\n");
	else
		printf("Точка не попадает в область\n");

	return 0;
}