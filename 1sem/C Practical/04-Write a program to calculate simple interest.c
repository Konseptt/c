// Write a program to calculate simple interest
#include<stdio.h>

main() {

    float p, t, r, i;
    printf("Enter Pricliple, Time and Rate: ");
    scanf("%f%f%f", &p, &t, &r);
    i = (p*t*r)/100;
    printf("The simple interest is : %f", i);
    return(0);
}
