/*
    5. WAP to find the sum of individual digit of n digit number using recursive funtion.
*/
#include <stdio.h>
#include <conio.h>

int sum_digits(int n);
int sum_digits(int n) {
    if (n >= 9) {
        return ( (n % 10) + sum_digits(n / 10));
    } else {
        return n;
    }
}

void main() {
    int sum, num;
    printf("Enter a number to find sum of digits: ");
    scanf("%d", &num);
    sum = sum_digits(num);
    printf("The sum of digits of '%d' is : %d", num, sum);
    getch();
}
