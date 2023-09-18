#include<stdio.h>
#include<conio.h>

void main ()
{
    int number, rem;
    printf("Enter a number: ");
    scanf("%d", &number);
    rem = number%2;
    if (rem != 0)
    {
        printf("The number '%d'' is odd", number);
        getch();
    }
}
