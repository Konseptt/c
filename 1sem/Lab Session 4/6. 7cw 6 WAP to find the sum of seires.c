/*
7. WAP to find the sum of series
1+1/8+1/27+.....+1/n^3
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    float n, i, s=0;
    printf("Enter the no. of terms upto which you want to find sum : ");
    scanf("%f", &n);
    for (i=1; i<=n; i++) {
        s = s + (1/(pow(i, 3)));
    }
    printf("The sum of series is : %f", s);
    getch();
}
