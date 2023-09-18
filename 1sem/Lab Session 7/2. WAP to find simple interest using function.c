/*
    2. WAP to find simple interest using function
*/
#include <stdio.h>

float calc_interest(float p, float t, float r) {
    float intr;
    intr = (p*t*r)/100.0;
    return intr;
}

void main() {
    float p, t, r, i;
    printf("Enter principle, time and rate of interest : \n");
    scanf("%f%f%f", &p, &t, &r);
    i = calc_interest(p, t, r);
    printf("The interest amount is : %f", i);
}
