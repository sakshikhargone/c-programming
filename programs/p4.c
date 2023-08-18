#include<stdio.h>

// Check whether number is prime or not

int main()
{
    int num;
    int isPrime = 1;
    printf("enter the value of num");
    scanf("%d",&num);
    for(int i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
    {
        printf("Input number is prime");
    }
    else
    {
        printf("Input number is NOT prime");
    }
    return 0;
}