// write a program to calculate area and perimeter of circle
#include<stdio.h>

main ()
{
    float r, a, p;
    const float PI = 3.1416;
    printf("Enter the raduis :  ");
    scanf("%f", &r); // scan value from keyboard
    a = PI*r*r;
    p = 2*PI*r ;
    printf("The area is      : %f\n", a);
    printf("The perimeter is : %f", p);
    return(0);
}


