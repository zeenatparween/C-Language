#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter the Number: \n");
    scanf("%d", &num);
    int fact = 1;
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d is: %d\n", num, fact);
    }
    printf("Factorial of Number is: %d", fact);
    return 0;
}
