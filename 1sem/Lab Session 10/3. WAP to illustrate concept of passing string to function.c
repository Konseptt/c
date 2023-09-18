char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}














/*
    3. WAP to illustrate concept of passing string to function

*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int is_palindrome(char *str[]);

int is_palindrome(char *str[]) {
    char temp[100];
    strcpy(temp, str);
    strrev(temp);
    if (strcmp(temp, str) == 0) {
        return 1;

    } else {
        return 0;
    }
}

void main() {
    int x=0;
    char str[100];
    printf("Enters a string to check palindrome: \n");
    scanf("%s", &str);
    x = is_palindrome(&str);
    if (x == 1) {
        printf("'%s' is a palindrome");
    } else {
        printf("'%s' is not a palindrome");
    }
    getch();
}
