/*
2. Write a program to add matrix of order RxC and display it
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int m1[100][100], m2[100][100], m_sum[10][10]={0}, i, j, r, c;
    printf("Enter no. of rows and column of matrix : ");
    scanf("%d%d", &r, &c);
    printf("Enter the first matrix of order %d*%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix of order %d*%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &m2[i][j]);
        }
        printf("\n");
    }
    // Now add them1

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            m_sum[i][j] = m1[i][j]+m1[i][j];
        }
        printf("\n");
    }
    printf("The sum of matrices is: \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d\t", m_sum[i][j]);
        }
        printf("\n");
    }
    getch();
    return(0);
}
