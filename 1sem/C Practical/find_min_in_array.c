/*
    Write a program to find minimum among no
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int a[100], n, i, max;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("Enter the %d element of array: \n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i=1; i<n; i++) {
        if (a[i] < max) {
            max = a[i];
        }
    }
    printf("The minimum value is %d", max);
}
