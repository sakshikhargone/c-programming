#include<stdio.h>

// Check if a number is even or odd
int main()
{
    int num;
    printf("enter the value");
    scanf("%d\n", &num);
    if(num%2 == 0)
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
    return 0;
}