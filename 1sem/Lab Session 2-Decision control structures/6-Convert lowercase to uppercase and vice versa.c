#include<stdio.h>
#include<ctype.h>

void main () {
    char input, lowercase, uppercase;
    printf("Enter an character :");
    input = getchar();
    if(input >= 65 && input <= 90)
    {
        lowercase = input+32;
        printf("The lowercase of '%c' is : %c", input, lowercase);
    } else if(input >= 97 && input <= 122)
    {
        uppercase = input-32;
        printf("The UPPERCASE of '%c' is : %c", input, uppercase);
    }
}
