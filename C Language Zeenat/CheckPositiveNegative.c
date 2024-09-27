#include<stdio.h>
#include<conio.h>

int main(){
    char opr;
    int n1, n2;
    printf("Enter the variable value of a and b");
    scanf("%d%d", &n1 &n2);
    printf("Enter the operator (+, -, /,*) ");
    scanf("%c", &opr);
    if(opr == '+'){
        printf("Sum of a and b is:%d", n1+n2);
    }
    else if(opr == '-'){
        printf("Subtract of a and b is: %d ", n1-n2);
    }
    else if(opr == '*'){
        printf("Multiplication of a and b is %d", n1*n2);
    } 
    else of(opr == '/'){
        printf("Division of a and b is: %d", n1/n2);
    }
    else{
        printf("OOPS! Wrong Operator");
    }
    return 0;

}
