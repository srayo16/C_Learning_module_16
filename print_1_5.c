#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int i)
{
    if (i > 5)
        return;
    printf("%d\n", i);

    fun(i + 1);
}

int main()
{
    fun(1);

    return 0;
}