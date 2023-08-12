#include <stdio.h>
#include<string.h>

// Program to take input & print

int main()
{
    char name[25];
    printf("Enter your name");
    scanf("%s", name);

    printf("Hello : %s", name);
    return 0;
}