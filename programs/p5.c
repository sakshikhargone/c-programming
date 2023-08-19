#include<stdio.h>
// Swapping two numbers 
int main(){
    int a;
    int b;
    printf("enter values of a & b");
    scanf("%d %d", &a, &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
    return 0;
}