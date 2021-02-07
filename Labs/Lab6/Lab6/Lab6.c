#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ru");

    double n, a, sum = 0;
    short k = 1;

    for (n = 0; n >= 0; n++)
    {
        a = k * (1 - (n - 0.5) / (n + 1));

        if (fabs(a) >= 0.000001)
        {
            sum += a;
        }
        else
        {
            printf("Сумма членов ряда = %.6lf\n", sum);
            break;
        }

        if (n == 10)
        {
            printf("Сумма десяти членов ряда = %.6lf\n", sum);
        }

        k = -k;
    }

    return 0;
}