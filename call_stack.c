#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void world()
{
    printf("World Start\n");
    printf("World End\n");
}
void show()
{
    printf("Show Start\n");
    world();
    printf("Show End\n");
}

int main()
{
    printf("Main Start\n");
    show();
    printf("Main End\n");
    return 0;
}