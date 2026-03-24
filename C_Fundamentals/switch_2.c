#include<stdio.h>
int main()
{
    int id;
    printf("id:");
    scanf("%d", &id);
    switch(id)
    {
        case 2:
        printf("john\n");
        break;
        case 16:
        printf("Eric\n");
        break;
        case 36:
        printf("Fc\n");
        break;
        default:
        printf("not found");
    }
    return 0;
}