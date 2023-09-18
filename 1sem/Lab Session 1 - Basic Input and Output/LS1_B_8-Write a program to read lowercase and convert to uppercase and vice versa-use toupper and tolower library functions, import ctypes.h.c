/*
Write a program to read lowercase and convert to uppercase and vice versa
(Use toupper and tolower function, include ctype.h)
*/
#include<stdio.h>
#include<ctype.h>

main () {
    char lowercase, uppercase;
    printf("Enter a lowercase character to convert to UPPERCASE :");
    lowercase = getchar();
    printf("\nThe lowercase of '%c' is : %c", lowercase, toupper(lowercase));
    getchar();

    printf("\nEnter a UPPERCASE character to convert to lowercase :");
    uppercase = getchar();
    printf("\nThe uppercase of '%c' is : %c", uppercase, tolower(uppercase));
}
