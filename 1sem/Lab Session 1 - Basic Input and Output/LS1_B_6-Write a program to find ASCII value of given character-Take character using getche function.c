/*
Write a program to find ASCII value of given character (Take character using getche() function)
*/
#include<stdio.h>
#include<conio.h>

main () {
    char input;
    printf("Enter a character to find its ASCII value : \n");
    input = getche();
    printf("\nThe ASCII value of '%c' is %d", input, input);
}
