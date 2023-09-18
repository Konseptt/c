/*
    4. Write a program to print following pattern

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

*/
#include<stdio.h>
#include<conio.h>
int main() {
    int n, i, i0;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        for (i0=1; i0 <= i; i0++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    getch();
    return(0);
}
