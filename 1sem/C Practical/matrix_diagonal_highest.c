/*

*/

#include<stdio.h>
#include<conio.h>

int main() {
    int m[20][20], i, j, r, c, max;
    printf("Enter no. of rows and column of matrix : ");
    scanf("%d%d", &r, &c);
    printf("Enter the matrix of order %d*%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &m[i][j]);
        }
        printf("\n");
    }
    max = m[0][0];

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if (m[i][j] > max) {
                max = m[i][j];
            }
        }
    }
    // Subsitute max value to diagonal

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if (i == j) {
                m[i][j] = max;
            }
        }
    }
    printf("The matrix after subsiution of max value is: \n");
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    getch();
    return(0);
}
