/*
    5. Write a program to find the sum individual digits of number using recursive function
*/
#include <math.h>
#include <conio.h>
#include <stdio.h>

int digit_sum(int number);
int digit_sum(int number) {
    if (log10(number)+1 > 1) {
        return (number%10) + digit_sum(number/10);
    } else {
        return number;
    }
}

void main() {
    int num, sod;
    printf("Enter a number: ");
    scanf("%d", &num);
    sod = digit_sum(num);
    printf("The sum of digits of '%d' is: %d", num, sod);
    getch();
}
