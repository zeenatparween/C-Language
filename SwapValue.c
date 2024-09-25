#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10;
    int b = 20;
    printf("Before Swapping : %d %d \n ", a, b);
    int temp = a;
    a = b;
    b = temp;

    printf("After Swapping: %d %d \n", a, b);
    return 0;
}