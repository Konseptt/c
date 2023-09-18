/*
2. WAP to illustrate the concept of nested if else
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int n1, n2, n3;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1>n2) {
        if (n1>n3) {
            printf("The largest number is: %d", n1);
        } else {
            printf("The largest number is: %d", n3);
        }
    } else {
        if (n2>n3) {
            printf("The largest number is: %d", n2);
        } else {
            printf("The largest number is: %d", n3);
        }
    }
    getch();
}
