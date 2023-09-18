/*
    1. WAP to find the sum of following series using RECURSIVE funtion
    1+11+111+1111+.....+n-terms
*/
#include <stdio.h>
#include <conio.h>

int sum_series(int t);
int sum_series(int t) {

    if (t == 1) {
        return 1;
    } else {
        return (t + 10 * sum_series(t-1));
    }
}

void main() {
    int s, t;
    printf("Enter the number of terms: ");
    scanf("%d", &t);
    s = sum_series(t);
    printf("The sum of series is: %d", s);
    getch();
}
