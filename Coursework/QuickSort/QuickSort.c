#include <stdio.h>
#include <locale.h>
#include <time.h>

#define ARRSIZE 5

void print_array(int arr[])
{
    for (int i = 0; i < ARRSIZE; i++)
        printf("%2d", arr[i]);

    printf("\n\n");
}

void swap(int arr[], int a, int b)
{
    int t = arr[a];
    arr[a] = arr[b];
    arr[b] = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
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

    quick_sort(arr, 0, ARRSIZE - 1);

    printf(" После сортировки:\n");
    print_array(arr);
}