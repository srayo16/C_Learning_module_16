#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int arr[], int n, int i)
{

    if (i == n)
        return;
    printf("%d ", arr[i]);
    fun(arr, n, i + 1);
}

void inputTake(int arr[], int n, int i)
{
    if (i == n)
        return;
    scanf("%d", &arr[i]);
    inputTake(arr, n, i + 1);
}

int main()
{
    int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    int n = 5;
    int i = 0;
    inputTake(arr, n, i);
    fun(arr, n, i);

    return 0;
}