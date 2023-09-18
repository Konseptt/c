/*
Write a program to accept temperature in degree Celcius and convert it into Farenheit using F=(C*9/5)+32
*/

#include<stdio.h>

main() {

    float temp_in_degree, temp_in_faren;
    printf("Enter Temperature in degree: ");
    scanf("%f", &temp_in_degree);
    temp_in_faren = (temp_in_degree*9/5)+32;
    printf("The Temperature in Farenheit : %f", temp_in_faren);
    return(0);
}
