/*
6. WAP to print the terms less than 500
    1,4,9,16,25........n
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int i=1;
    printf("The terms are: \n");
    do {
        printf("%d, ", (i*i));
        i++;
    } while ((i*i)<500);
    getch();
}
