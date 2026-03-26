#include<stdio.h>
int max2(int, int);

int main()
{
    int a, b, max;
    printf("plz enter the first integer: ");
    scanf("%d", &a);
    printf("plz enter the second integer: ");
    scanf("%d", &b);
    printf("The maximum is %d. \n", max2(a, b));
    return 0;
}

int max2(int x, int y)
{
    if(x >= y)  return x;
    else return y;
}