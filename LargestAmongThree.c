#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter the  integer value of a, b and c \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is greater");
    }
    else if (b > c)
    {
        printf("b is greater");
    }
    else
    {
        printf(" c is greater");
    }
    return 0;
}