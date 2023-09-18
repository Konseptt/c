/*
Write a program to input six digit integer and calculate sum product and agerage value of its digits
*/
#include<stdio.h>
#include<math.h>

main () {
    int number, sum, product, d1, d2, d3, d4, d5, d6;
    float average;
    printf("Enter a six digit number : ");
    scanf("%d", &number);
    d1 = number%10;
    number = number/10;
    d2 = number%10;
    number = number/10;
    d3 = number%10;
    number = number/10;
    d4 = number%10;
    number = number/10;
    d5 = number%10;
    number = number/10;
    d6 = number%10;
    sum = d1+d2+d3+d4+d5+d6;
    product = d1*d2*d3*d4*d5*d6;
    average = (d1+d2+d3+d4+d5+d6)/6.0;
    printf("\nSum: %d, Product: %d, Average: %f", sum, product, average);
}
