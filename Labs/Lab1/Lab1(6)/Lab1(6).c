#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    long long day = 60 * 60 * 24;
    long long year = day * 365;

    long long current = year + day;
    printf("В 2020 году:\t %lld секунд\n", current);

    long long century = year * 100 + 25 * day;
    printf("В 100 лет:\t %lld секунд\n", century);

    long long millennium = century * 10;
    printf("В 1000 лет:\t %lld секунд\n", millennium);

    return 0;
}