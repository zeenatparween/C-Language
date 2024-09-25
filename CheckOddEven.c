#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter any num: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Even Number: ");
    }
    else
    {
        printf("odd Number");
    }
}