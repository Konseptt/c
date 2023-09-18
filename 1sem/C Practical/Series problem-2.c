/*
Series problem
1. WAP to find the sum of following series
f(x) = 1+4++9+16.....+(n^2)
where n is the no of terms or limit of series
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>>

int main() {
    int n, i, s=0;
    printf("Enter the no. of terms upto which you want to find sum : ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        s = s + pow(i, 2);
    }
    printf("The sum of series is : %d", s);
    getch();
}
