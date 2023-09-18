/*
    7. WAP to swap two number using funtion and display the result in main.
*/
#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void main() {
    int a, b;
    printf("Enter two numbers a and b : ");
    scanf("%d%d", &a, &b);
    printf("Before swapping: \na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: \na = %d\nb = %d\n", a, b);
}
