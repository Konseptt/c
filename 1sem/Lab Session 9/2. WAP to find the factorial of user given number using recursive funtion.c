/*
    2. WAP to find the factorial of user given number using recursive funtion.
*/
#include <stdio.h>
#include <conio.h>

int factorial(int num);
int factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return(num * factorial(num - 1));
    }
}

void main() {
    int facto, num;
    printf("Enter a number to calculate factorial of : ");
    scanf("%d", &num);
    facto = factorial(num);
    printf("The factorial of '%d' is : %d", num, facto);
    getch();
}
