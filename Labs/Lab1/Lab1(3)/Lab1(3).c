#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int a;
    printf("Введите число: ");
    scanf_s("%d", &a); // до 14

    a = a * a;
    a = a * a;
    a = a * a;

    printf("Ваше число в восьмой степени: %d\n", a);

    return 0;
}