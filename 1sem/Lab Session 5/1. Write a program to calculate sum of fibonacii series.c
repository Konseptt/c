/*
 1. Write a program to find the sum of fibonacii series
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int a=0, b=1, r, c, s=0;
    printf("Enter the range : ");
    scanf("%d", &r);
    printf("The terms of fibonacii series are: \n");
    while ( a <= r ) {
        printf("%d\t", a);
        s += a;
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nThe sum of series is : %d", s);
    getch();
    return(0);
}
