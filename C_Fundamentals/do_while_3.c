#include<stdio.h>
int main()
{
    int ans = 4, guess;
    do
    {
        printf("plz enter ur guess\n");
        scanf("%d", &guess);
        if(guess > ans) printf("too large");
        else if(guess <ans) printf("too small");
        else printf("correct");
    }while(guess != ans);
    return 0;
}