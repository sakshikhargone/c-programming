#include<stdio.h>

// Finding student name by roll no using Switch statement

int main(){
    int rollnumber;
    printf("enter rollnumber");
    scanf("%d", &rollnumber);

    switch(rollnumber)
    {
    case 1 :
    printf("the roll number 1 is Aman");
    break;
    
    case 2:
    printf("the roll number 2 is Bhumi ");
    break;

    case 3:
    printf("the roll number 3 is Chinky ");
    break;

    case 4:
    printf("the roll number 4 is Sakshi ");
    break;

    case 5:
    printf("the roll number 5 is Tanvi ");
    break;

    default :
    printf("No Student found");
    break;
    }

    return 0;

}