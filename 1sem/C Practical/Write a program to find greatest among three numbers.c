/*
(if else )
Write a program to find greatest among three numbers
*/
#include<stdio.h>
#include<conio.h>

void main() {

    int a, b, c;
    printf("Enter the value of a, b and c \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a>b && a>c) {
        printf("%d is greater", a);
    } else if (b>a && b>c) {
        printf("%d is greater", b);
    } else {
        printf("%d is greater", c);
    }
    getch();
}
