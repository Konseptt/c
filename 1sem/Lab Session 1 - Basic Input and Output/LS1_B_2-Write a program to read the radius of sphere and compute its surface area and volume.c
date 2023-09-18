/*
Write a program to read the radius of sphere and compute its surface area and volume
*/
#include<stdio.h>

main () {
    float radius, surface_area, volume;
    const float PI = 22.0/7.0;
    printf("Enter the radius of sphere : ");
    scanf("%f", &radius);
    surface_area = 4*PI*radius*radius;
    volume = (4.0/3.0)*PI*radius*radius*radius;
    printf("The surface area is : %f\n The volume is       : %f", surface_area, volume);
}
