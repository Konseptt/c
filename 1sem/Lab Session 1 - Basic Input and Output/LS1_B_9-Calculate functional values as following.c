/*
Calculate functional values as following

f1 =
f2 =  (x+y)^2-z^2-2xyz+e^(x-y)
f3 =  tan(x)+invsin(x)+log(z)

*/
#include<stdio.h>
#include<math.h>

main () {
    float x, y, z, f1, f2, f3;
    const float PI = 22.0/7.0;

    printf("Enter the value of x, y and z: ");
    scanf("%f%f%f", &x, &y, &z);

    f1 = 0;   // question unclear

    f2 = pow(x+y, 2.0)-pow(z, 2.0)-2.0*x*y*z+exp(x-y);

    // Value in radian
    f3 = tan(x)+asin(x)+log10(z);  // 1<sin(x)>0,   asin(0>x>1) does not exist and gives nan

    printf("The values of f1, f2 and f3 are : \n");
    printf("f1 = %f \nf2 = %f \n f3 = %f \n", f1, f2, asin(-2));
}
