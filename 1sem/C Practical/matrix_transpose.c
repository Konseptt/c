/*

Write a program to transpose a 2x3 matrix
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int m[2][3], t[3][2], i, j;
    printf("Enter the matrix of order 2x3 rowwise : \n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &m[i][j]);
        }

        printf("\n");
    }
    printf("The matrix of order 2x3 is: \n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            t[i][j] = m[j][i];
        }
    }
    printf("\nThe transposed matrix of order 3x2 is: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    getch();
    return(0);
}
