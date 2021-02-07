#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "ru");

	double x, y, t1, t2;
	double a = 1.5, b = 4.5, c = 7.5;

	printf("Введите значения х и у : ");
	scanf_s("%lf %lf", &x, &y);

	// 1
	double axb = a * x + b;
	double yxa = y * x + a;

	if ((axb == 0) || (axb / yxa <= 0)) {
		printf("t1 = недопустимые значения х и у\n");
	}
	else {
		double ln = log(yxa / axb);
		t1 = (1 / axb + y * ln / c) / c;
		printf("t1 = %lf\n", t1);
	}

	// 2
	double ax = a * x;
	double pw = pow(cos(x), 2);
	double tg = tan(ax / 2);
	if ((pw == 0) || (tg <= 0)) {
		printf("t2 = недопустимые значения х и у\n");
	}
	else {
		t2 = (sin(ax) / pw + log(tg)) / 2 / a;
		printf("t2 = %lf\n", t2);
	}

	return 0;
}