#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "ru");

    double a, b, c, p, s;
    printf("Введите длинну каждой стороны треугольника: ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2;
    s = sqrt((p * (p - a) * (p - b) * (p - c)));
    printf("За формулой Герона площадь равна %.3f\n", s);

    return 0;
}