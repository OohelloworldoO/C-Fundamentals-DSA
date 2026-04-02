#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    for(int i=1; i <= 5; i++)
    {
        int dice;
        do{
            dice = rand();
        }while(dice < 1 || dice >6); //效能太低
        printf("%d\n", dice);
    }
    return 0;
}