#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun(char arr[], int n, int i)
{
    if (arr[i] == '\0')
        return n - 1;

    fun(arr, n + 1, i + 1);
}

int main()
{
    char arr[6];
    // scanf("%c", arr);
    gets(arr);
    // int n = strlen(arr);
    // printf("%d", n);
    int c = fun(arr, 1, 0);
    printf("%d\n", c);
    return 0;
}