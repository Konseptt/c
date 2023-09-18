/*
    Write a program to display n numbers in aescending order
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int a[200], i, j, n, temp;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("Enter the %d element of array: \n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    // Sorting to ascending order
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (a[i]>a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The array in ascending order is: \n");
    for (i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
}
