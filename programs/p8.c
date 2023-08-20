#include<stdio.h>

// Print table by using for loop

int main()
{
    int num, i;
    printf("enter the value of num");
    scanf("%d", &num);
    for(i=1; i<=10; i++)
    {
        printf("%d", num*i);
    }
    return 0;
}