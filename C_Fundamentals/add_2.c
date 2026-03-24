#include<stdio.h>
int main()
{
    int t=0,sum=0;
    for(int i=0;i<3;i++)
    {
        printf("plz enter the integers u want to addition\n");
        scanf("%d",&t);
        sum += t;
    }
    printf("sum is %d\n", sum);
    return 0;
}