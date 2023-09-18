/*
8. WAP to to find the sum of following series

 i.  f(x)= x+x^2+x^3+....+x^n
 ii. 1+4+9+16+...+n^2

*/
#include<stdio.h>
#include<conio.h>
#include<math.h>`

int main() {
    int n, i, s=0, x;
    printf("Enter the value of x for f(x) : ");
    scanf("%d", &x);
    printf("Enter the no. of terms upto which you want to find sum : ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        s = s + pow(x, i);
    }
    printf("The sum of series is : %d\n", s);
    getch();
}
