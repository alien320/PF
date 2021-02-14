#include <stdio.h>
#include <locale.h>

char compare(int x, int y)
{
	char sign;

	if (x < y) sign = '<';
	else if (x > y) sign = '>';
	else sign = '=';

	return sign;
}

void main()
{
	setlocale(LC_ALL, "ru");

	int x, y;

	printf("Введите два числа: ");
	scanf_s("%d %d", &x, &y);

	printf("%d %c %d\n", x, compare(x, y), y);
}