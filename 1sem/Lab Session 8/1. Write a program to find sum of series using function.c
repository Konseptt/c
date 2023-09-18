/*
    1. Write a program to find sum of series using function
        1+11+111+1111+....+n(th) terms
*/
#include <stdio.h>
#include <conio.h>

int sum_series(range);

int sum_series(range) {
    int i, tmp=0, sum=0;
    for(i=0; i<range; i++) {
        tmp = (tmp*10)+1;
        printf("%d, ", tmp);
        sum = sum + tmp;
    }
    return sum;
}

void main() {
    int r, s;
    printf("Enter the number of terms: ");
    scanf("%d", &r);
    s = sum_series(r);
    printf("\n The sum is : %d", s);
    getch();
}
