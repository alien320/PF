#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int a;
    printf("Загадайте число: ");
    scanf_s("%d", &a);

    a++;

    printf("Мое число: %d\n", a);

    return 0;
}