// write a program to calculate area and perimeter of rectangle
#include<stdio.h>

main ()
{
    int a, b, l, p;
    printf("Enter the length and breadth :  ");
    scanf("%d%d", &l, &b); // scan value from keyboard
    a = l * b;
    p = 2 * ( l + b );
    printf("The area is      : %d\n", a);
    printf("The perimeter is : %d", p);
    return(0);
}

