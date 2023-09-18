/*
    4i. WAP to find the sum of following series using recursive funtion.
        1+4+9+16+.....+(n^2)
*/
#include <stdio.h>
#include <conio.h>

int sum_series(int t);
int sum_series(int t) {
    if (t <= 1) {
        return(1);
    } else {
        return( (t*t) + sum_series(t - 1));
    }
}

void main() {
    int terms, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    sum = sum_series(terms);
    printf("The sum of series is : %d", sum);
    getch();
}
