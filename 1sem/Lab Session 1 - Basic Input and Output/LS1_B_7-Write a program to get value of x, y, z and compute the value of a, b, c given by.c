/*
Write a program to get value of x, y, z and compute the value of a, b, c given by
a = x+|y-z|
b = taninv(sqroot(x^2+y^2)/2)
c = (x-z)^(4/3)
*/
#include<stdio.h>
#include<math.h>

main () {
    float x, y, z, a, b, c, c;
    const float PI = 22.0/7.0;

    printf("Enter the value of x, y and z: ");
    scanf("%f%f%f", &x, &y, &z);

    a = x+fabs(y-z);
    b = atan( (sqrt( pow(x, 2.0) + pow(y, 2.0) ) )/2.0 ); // * (180.0/PI);  if value in degrees)

    c = pow(x-z, 4.0/3.0);  // ( x-z < 0 results in -nan (eg: x=1, y=2, z=3)).

    printf("The values of a, b and c are : \n");

    printf("a = %f \n", a);
    printf("b = %f \n", b);
    printf("c = %f \n", c);
}
