/*
Series problem
1. WAP to find the sum of following series
1+2+3+4+......+n
where n is the no of terms or limit of series
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int n, i, s=0;
    printf("Enter the no. of terms upto which you want to find sum : ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        s = s + i;
    }
    printf("The sum of series is : %d", s);
    getch();
}
