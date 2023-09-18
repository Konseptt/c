/*
    9. Write a program to scan n number in an array and find the maximum and minimum number and display it.
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int a[100], i, j, n, max, min;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    printf("Enter %d items of: \n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    // Find maximum
    max = a[0];
    for (i=0; i<n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    // Find minimum
    min = a[0];
    for (i=0; i<n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("The maximum is : %d\nThe minimum is : %d", max, min);
    getch();
    return(0);
}
