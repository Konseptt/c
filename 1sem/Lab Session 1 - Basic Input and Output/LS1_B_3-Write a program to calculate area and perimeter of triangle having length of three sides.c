/*
Write a program to calculate area and perimeter of triangle having length of three sides
*/
#include<stdio.h>
#include<math.h>

main () {
    float a, b, c, area, perimeter, semi_perimeter;
    printf("Enter the length of three sides \n (Sides should be valid. ie: sum of any two sides > remaining third side)\n : ");
    scanf("%f%f%f", &a, &b, &c);
    perimeter = a+b+c;
    semi_perimeter = perimeter/2.0;
    area = sqrt(semi_perimeter*(semi_perimeter-a)*(semi_perimeter-b)*(semi_perimeter-c));
    printf("The area is      : %f\nThe perimeter is : %f", area, perimeter);
}
