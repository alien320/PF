#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, n, dh;
    int h;

    printf(" --------------------\n");
    printf("|   x   |      y     |\n");
    printf(" --------------------\n");

    for (n = 0; n < 3; n++)
    {
        for (x = 0; x < 8; x += 0.25)
        {
            if (x < 2) y = sqrt(1 - (x - 1) * (x - 1));

            else if (x < 4) y = sqrt(1 - (x - 3) * (x - 3));

            else if (x < 6) y = - sqrt(1 - (x - 5) * (x - 5));

            else  y = - sqrt(1 - (x - 7) * (x - 7));

            if (x + n * 8 == 20) break;
            printf("| %5.2lf | %10.7lf | ", x + n * 8, y);

            dh = (y + 1) * 10;
            h = dh;
            if (dh - h > 0.5) h++;

            for (; h > 0; h--) printf(" ");
            printf("*\n");
        }
    }

    printf(" --------------------\n");
    return 0;
}