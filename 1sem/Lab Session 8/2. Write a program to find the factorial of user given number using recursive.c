/*
    2. Write a program to find the factorial of user given number using recursive
        function
*/
#include <stdio.h>
#include <conio.h>

int factorial(int number);

int factorial(int number) {
    int facto=1;
    if (number >= 1) {
        facto = number * factorial(number - 1);
    }
    return facto;
}

void main() {
    int n, facto;
    printf("Enter a number to calculate factorial of : ");
    scanf("%d", &n);
    facto = factorial(n);
    printf("The factorial of '%d' is : %d", n, facto);
    getch();
}
