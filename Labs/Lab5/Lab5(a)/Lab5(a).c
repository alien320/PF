#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "ru");

	// a*x^2 + b*x + c = 0

	int a, b, c, d;
	double x, x1, x2, sqrtd, dbla;

	printf("Введите коефициенты:\na = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);

	d = b * b - 4 * a * c;
	dbla = a;
	dbla = 2 * dbla;
	b = -b;

	if (d < 0) {
		printf("Уравнение не имеет корней\n");
	}
	else if (d == 0) {
		x = b / dbla;
		printf("Уравнение имеет один корень:\nx = %.2lf\n", x);
	}
	else {
		sqrtd = sqrt(d);
		x1 = (b + sqrtd) / dbla;
		x2 = (b - sqrtd) / dbla;
		printf("Уравнение имеет два корня:\nx1 = %.2lf\nx2 = %.2lf\n", x1, x2);
	}

	return 0;
}