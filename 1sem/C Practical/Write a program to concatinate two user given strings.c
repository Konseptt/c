/*
    Write a program to concatinate two user given strings

*/
#include <conio.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char str1[20], str2[20], cstr[50];
    printf("Enter first string: ");
    scanf("%s", &str1);
    printf("Enter the second string: ");
    scanf("%s", &str2);
    strcpy(cstr, str1);
    strcat(cstr, " ");
    strcat(cstr, str2);
    printf("The combined string is : %s", cstr);
    getch();
    return 0;



}
