#include <stdio.h>
#include <locale.h>
#include <time.h>

#define ARRSIZE 10

void print_array(int arr[])
{
    for (int i = 0; i < ARRSIZE; i++)
        printf("%2d", arr[i]);

    printf("\n\n");
}

void gnome_sort(int arr[])
{
    for (int i = 0; i < ARRSIZE;)
    {
        if ((i == 0) || (arr[i] >= arr[i - 1]))
            i++;
        else
        {
            int c = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = c;
            i--;
        }
    }
}

void main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int arr[ARRSIZE];
    for (int i = 0; i < ARRSIZE; i++)
        arr[i] = rand() % 10;

    printf(" До сортировки:\n");
    print_array(arr);

    gnome_sort(arr);

    printf(" После сортировки:\n");
    print_array(arr);
}