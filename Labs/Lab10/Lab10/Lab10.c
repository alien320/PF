#include <stdio.h>
#include <locale.h>
#include <time.h>

#define ARRSIZE 16
#define ARRSIZE2 4

void PrintArray(int arr[])
{
    for (int i = 0; i < ARRSIZE; i++)
    {
        printf(" %2d ", arr[i]);
    }
    printf("\n\n");
}

void PrintArray2(int arr2[][ARRSIZE2])
{
    for (int i = 0; i < ARRSIZE2; i++)
    {
        for (int j = 0; j < ARRSIZE2; j++)
        {
            printf(" %2d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void TransformArray(int arr[])
{
    int arr2[ARRSIZE2][ARRSIZE2];

    for (int i = 0; i < ARRSIZE2; i++)
    {
        for (int j = 0; j < ARRSIZE2; j++)
        {
            arr2[i][j] = arr[i * 4 + j];
        }
    }

    PrintArray2(arr2);

    int a = 0, d;
    for (int i = 0; i < ARRSIZE2; i++)
    {
        d = arr2[i][a];
        for (int j = 0; j < ARRSIZE2; j++)
        {
            arr2[i][j] *= d;
        }
        a++;
    }

    PrintArray2(arr2);

    for (int i = 0; i < ARRSIZE2; i++)
    {
        for (int j = 0; j < ARRSIZE2; j++)
        {
            arr[i * 4 + j] = arr2[i][j];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int arr[ARRSIZE];
    for (int i = 0; i < ARRSIZE; i++) arr[i] = rand() % 10;
    
    PrintArray(arr);
    TransformArray(arr);
    PrintArray(arr);

    return 0;
}