/*
6. Write a program to scan a string and sort the character to alphabetical order
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[200], tmp;
    int len, i, j;
    printf("Enter the string to sort : ");
    scanf("%s", &str);
    len = strlen(str);
    for (i=0; i<len; i++) {
        for (j=i+1; j<len; j++) {
            if (str[i] > str[j]) {
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }

    }
    printf("The sorted string is : %s", str);
    getch();
    return 0;
}
