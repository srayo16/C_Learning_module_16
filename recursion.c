#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void show()
{
    printf("show\n");
    show();
}

int main()
{
    show();
    return 0;
}