/*
    8. Write a program to scan n number in an array and sort it to ascending order and display it.
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int a[100], i, j, n, tmp;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    printf("Enter %d items of: \n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    // Sorting to ascending order
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (a[i]>a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("The array in ascending order is: \n");
    for (i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
}
