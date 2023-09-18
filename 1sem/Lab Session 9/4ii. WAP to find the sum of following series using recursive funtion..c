/*
    4ii. WAP to find the sum of following series using recursive funtion.
        f(x)=x+x^2+x^3+.....+x^n
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int sum_series(int x, int t);
int sum_series(int x, int t) {
    if (t <= 1) {
        return(x);
    } else {
        return( pow(x, t) + sum_series(x, (t - 1)));
    }
}

void main() {
    int terms, x, sum;
    printf("Enter the number of terms and value of 'x' : ");
    scanf("%d%d", &terms, &x);
    sum = sum_series(x, terms);
    printf("The sum of series is : %d", sum);
    getch();
}
