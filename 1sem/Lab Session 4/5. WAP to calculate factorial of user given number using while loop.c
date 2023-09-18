/*
5. WAP to calculate factorial of user given number using while loop.
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int n, fc=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n>0) {
        fc = fc*n;
        n--;
    }
    printf("Factorial is : %d", fc);
    getch();
}
