/*
5. WAP to calculate factorial of user given number using while loop.
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int n, fc=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    do {
        fc = fc*n;
        n--;
    } while (n>0);
    printf("Factorial is : %d", fc);
    getch();
}
