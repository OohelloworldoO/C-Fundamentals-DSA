#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int answer = rand() % 100, guess;

    do{
        printf("%plz enter your guess: ");
        scanf("%d", &guess);
        if(guess > answer) printf("Too large\n");
        else if(guess <answer) printf("Too small\n");
        else printf("correct!\n");
    }while(guess != answer);
    return 0;
}