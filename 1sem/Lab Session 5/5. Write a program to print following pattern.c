/*
    5. Write a program to print following pattern
    A
    A B
    A B C
    A B C D
    A B C D E
*/
#include<stdio.h>
#include<conio.h>
int main() {
    char i, j;
    for (i='A'; i<='E'; i++) {
        for (j=65; j <= i; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
    getch();
    return(0);
}










/*
    5. Write a program to print following pattern
    A
    A B
    A B C
    A B C D
    A B C D E

#include<stdio.h>
#include<conio.h>
int main() {
    int n, i, i0;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        for (i0=1; i0 <= i; i0++) {
            printf("%c ", i0+64);
        }
        printf("\n");
    }
    getch();
    return(0);
}
*/
