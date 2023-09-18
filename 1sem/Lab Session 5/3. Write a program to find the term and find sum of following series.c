/*
    3. Write a program to find the term and find sum of following series
    1,11,111,1111,11111,......n terms
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int n, i, x=0, s=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        x = (x * 10) + 1;
        printf("%d, ", x);
        s = s + x;
    }
    printf("\n The sum is : %d", s);
    getch();
    return(0);
}
