#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    for(int i=1; i <= 5; i++)
    {
        int dice = rand() % 7;
        printf("%d\n", dice);
    }
    return 0;
}