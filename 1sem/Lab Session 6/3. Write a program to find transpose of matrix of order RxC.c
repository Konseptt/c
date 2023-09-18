/*

3. Write a program to find transpose of matrix of order RxC
*/

#include<stdio.h>
#include<conio.h>

int main() {
    int mat[200][200], transp[200][200], i, j, r, c;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter the data for matrix of order %dx%d rowwise : \n", r, c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &mat[i][j]);
        }

        printf("\n");
    }
    for (i=0; i<c; i++) {
        for (j=0; j<r; j++) {
            transp[i][j] = mat[j][i];
        }
    }
    printf("\nThe transposed matrix is of order %dx%d and is: \n", c, r);
    for (i=0; i<c; i++) {
        for (j=0; j<r; j++) {
            printf("%d\t", transp[i][j]);
        }
        printf("\n");
    }
    getch();
    return(0);
}
