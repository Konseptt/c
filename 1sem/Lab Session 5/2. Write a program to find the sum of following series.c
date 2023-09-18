/*
    2. Write a program to find the sum of following series
    -1+4-9+16-25+36.......+(-1)^n*n^2
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int n, i;
    float s=0.0;
    printf("Enter the number of terms to find sum of : ");
    scanf("%d", &n);
    for (i=1; i <=n; i++) {
        s = s + (pow(-1, i) * pow (i, 2));
    }
    printf("\nThe sum of series is : %f", s);
    getch();
    return(0);
}
