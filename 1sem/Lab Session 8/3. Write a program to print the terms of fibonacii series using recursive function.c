/*
    3. Write a program to print the terms of fibonacii series using recursive
        function
*/
#include <stdio.h>
#include <conio.h>

int print_fibonacii(int position);

int print_fibonacii(int position) {
    if (position == 1 || position == 2) {
        return position - 1;
    } else {
        return print_fibonacii(position - 1) + print_fibonacii(position - 2);
    }
}

void main() {
    int r, i, fibn;
    printf("Enter the number of terms : ");
    scanf("%d", &r);
    for(i=1; i<=r; i++) {
        printf("%d, ", print_fibonacii(i));
    }
    getch();
}
