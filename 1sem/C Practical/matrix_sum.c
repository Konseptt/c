/*
Write a program to find sum of two matrix the matrix of order r*c
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int m1[10][10], m2[10][10], m3[10][10]={0}, i, j, r, c;
    printf("Enter no. of rows and column of matrix : ");
    scanf("%d%d", &r, &c);
    printf("Enter the 1st matrix of order %d*%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the 2nd matrix of order %d*%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &m2[i][j]);
        }
        printf("\n");
    }
    // Now add them
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            m3[i][j] = m1[i][j]+m1[i][j];
        }
        printf("\n");
    }
    printf("The sum of matrices is: \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }
    getch();
    return(0);
}
