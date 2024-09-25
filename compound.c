#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float principal, rate, time, CI;
    printf("Enter principle (amount):");
    scanf("%f", &principal);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);

    CI = principal * pow((1 + rate / 100), time);

    printf("Compound Interest = %f", CI);
    return 0;
}