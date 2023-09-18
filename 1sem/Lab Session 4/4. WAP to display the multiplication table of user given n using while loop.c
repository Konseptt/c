/*
4. WAP to display the multiplication table of user given n using while loop.
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, m;
    printf("Enter a number : ");
    scanf("%d", &n);
    i=1;
    do {
        m=n*i;
        printf("%d * %d= %d\n", n, i, m);
        i++;
    } while (i<=10);
    getch();
}
