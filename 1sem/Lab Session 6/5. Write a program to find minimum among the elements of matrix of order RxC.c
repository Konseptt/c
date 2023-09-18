/*
5. Write a program to find minimum among the elements of matrix of order RxC
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int m1[100][100], min, i, j, r, c;
    printf("Enter no. of rows and column of matrix : ");
    scanf("%d%d", &r, &c);
    printf("Enter the first matrix of order %d*%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    }
    min = m1[0][0];
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if (m1[i][j] < min) {
                min = m1[i][j];
            }

        }
    }
    printf("The element with minimum value is %d", min);
    getch();
    return 0;
}
