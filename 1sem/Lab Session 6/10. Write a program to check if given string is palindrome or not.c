/*
10. Write a program to check if given string is palindrome or not
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[50], tmp[50];
    printf("Enter a string: ");
    scanf("%s", &str);
    strcpy(tmp, str);
    strev(str);
    if (strcmp(tmp, str) == 0) {
        printf("The string %s is a palindrome !", tmp);

    } else {
        printf("The string %s is not a palindrome !", tmp);
    }
    getch();
    return 0;
}
