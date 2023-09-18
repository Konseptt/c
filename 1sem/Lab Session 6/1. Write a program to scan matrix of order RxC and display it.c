/*

1. Write a program to scan matrix of order RxC and display it

*/

#include<stdio.h>
#include<conio.h>

int main() {
    int mat[200][200], i, j, r, c;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter the matrix of order %dx%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &mat[i][j]);
        }

        printf("\n");
    }
    printf("The matrix of order %dx%d is: \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    getch();
    return(0);
}
