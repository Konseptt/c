/*
9. Write a program to join two strings
*/

#include <conio.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10], cat[50];
    printf("Enter first string: ");
    scanf("%s", &str1);
    printf("Enter second string: ");
    scanf("%s", &str2);
    strcpy(cat, str1);
    strcpy(cat, " ");
    strcpy(cat, str2);
    printf("The joined string is : %s", cat);
    getch();
    return 0;
}
