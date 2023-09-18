/*
    8. WAP to print the following pattern
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char str[] = "nepal";
    int l, i, j;
    l = strlen(str);
    for (i=0; i<l; i++) {
        for (j=0; j<=i; j++) {
            printf("%c\t", str[j]);
        }
        printf("\n");
    }
    getch();
}
