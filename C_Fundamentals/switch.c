#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    float ans;
    scanf("%d %c %d", &num1,&op,&num2);
    switch(op){
        case '+':
            ans = num1 + num2;
        break;
        case '-':
            ans = num1 - num2;
        break;
        case '*':
            ans = num1 * num2;
        break;
    }
    printf("ans: %f", ans);
    return 0;
}