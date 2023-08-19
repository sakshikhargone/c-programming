#include<stdio.h>

// To print fibonacci series

int main()
{
    int sum = 1;
    int previous_sum = 0;
    int current_sum = 1;
    int num, i;
    printf("enter the value of num");
    scanf("%d", &num);

    printf("1");

    for(i = 1; i<=num; i++)
    {
        previous_sum = sum;
        sum = sum + current_sum;
        current_sum = previous_sum;
        printf("%d", sum);
    }
        return 0; 
    
}