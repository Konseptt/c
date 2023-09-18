/*
    6. WAP to print the terms of the fibonacci series using funtion.
*/
#include <stdio.h>

void print_fibonacii(int terms);

void print_fibonacii(int terms) {
    int a=0, b=1, c, i;
    printf("%d, %d, ", a, b);
    for (i=2; i<terms; i++) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }
}

void main() {
    int t;
    printf("Enter the number of terms : ");
    scanf("%d", &t);
    print_fibonacii(t);
}
