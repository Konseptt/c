/*
WAP to find sum of first 20 natural number
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int i, s=0;
    i=1;
    do {
        s = s+i;
        i++;
    } while (i<=20);
    getch();
}
