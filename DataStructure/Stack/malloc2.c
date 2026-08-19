#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = malloc(sizeof(int) * 3);
    p[0] = 20;
    p[1] = 30;
    p[2] = 40;

    printf("%d %d %d\n", p[0], p[1], p[2]);
    free(p);
    return 0;
}