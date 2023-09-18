/*
Write a program to read base radius and radial height of Cylinder and compute its base area
curve area and volume
*/

#include<stdio.h>

main() {

    float radius, height, csa, area, vol;
    printf("Enter Radius and Height of cylinder in cm: ");
    scanf("%f%f", &radius, &height);
    csa = 2*3.1416*radius*height;
    area = 3.1416*radius*radius;
    vol = area*height;
    printf("The Base Area is : %f cm^2\n", area);
    printf("The Curve Area is : %f cm^2\n", csa);
    printf("The Volume is : %f cm^3\n", vol);
    return(0);
}

