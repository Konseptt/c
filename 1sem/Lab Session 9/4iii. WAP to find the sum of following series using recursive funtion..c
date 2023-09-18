/*
    4iii. WAP to find the sum of following series using recursive funtion.
        1+2/2!+3/3!+.....+ n/n!
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

float sum_series(int t);
int factorial(int num);

float sum_series(int t) {
    if (t <= 1) {
        return(1);
    } else {
        return( ((float)t/factorial(t)) + sum_series(t - 1));
    }
}

int factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return(num * factorial(num - 1));
    }
}

void main() {
    int terms;
    float sum;
    printf("Enter the number of terms : ");
    scanf("%d", &terms);
    sum = sum_series(terms);
    printf("The sum of series is : %f", sum);
    getch();
}
