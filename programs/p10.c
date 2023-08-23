#include <stdio.h>

// Simple interest calculation using function

float calculateInterest(float principle, float rate, int years);

int main()
{
    float principle;
    float rate;
    int time;
    scanf("%f%f%d ", &principle, &rate, &time);
    float si = calculateInterest(principle, rate, time);
    printf("%f", si);
    return 0;
}
float calculateInterest(float principle, float rate, int years)
{
    float result = (principle * rate * years) / 100;
    return result;
}
