/*
    6. Write a program to check if the number is armstrong number or not using recursive function
*/

#include <math.h>
#include <conio.h>
#include <stdio.h>

int reverse(int number, int length);
int reverse(int number, int length) {
    if (number > 0) {
        return (pow(number%10, length) + reverse(number/10, length));
    } else {
        return 0;
    }
}

void main() {
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverse(num, (log10(num) + 1));
    if (num == rev) {
        printf("The number '%d' is an armstrong number", rev);
    } else {
        printf("The number '%d' is not an armstrong number", rev);
    }
    getch();
}
