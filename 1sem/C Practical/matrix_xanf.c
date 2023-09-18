/*
Write a program to scan the matrix of order r*c
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int m[20][20], i, j, r, c;
    printf("Enter no. of rows and column of matrix : ");
    scanf("%d%d", &r, &c);
    printf("Enter the matrix of order %d*%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &m[i][j]);
        }
        printf("\n");
    }
    printf("The matrix of order %d*%d is: \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    getch();
    return(0);
}
