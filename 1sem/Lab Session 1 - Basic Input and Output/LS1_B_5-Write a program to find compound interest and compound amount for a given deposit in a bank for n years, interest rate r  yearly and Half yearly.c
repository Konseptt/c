/*
Write a program to find compound interest and compound amount for a given deposit in a
bank for n years, interest rate r (a) yearly (b) Half yearly
*/
#include<stdio.h>
#include<math.h>

main () {
    float R, N, P, amount_yearly, amount_half_yearly, interest_yearly, interest_half_yearly;
    printf("Enter Despoit Amount, Time duration and Rate of Interest : \n");
    scanf("%f%f%f", &P, &N, &R);

    amount_yearly = P*pow((1+(R/100.0)), N);
    interest_yearly = amount_yearly - P;

    amount_half_yearly = P*pow((1+(R/200.0)), 2.0*N);
    interest_half_yearly = amount_half_yearly - P;

    printf("Compound Amount (Yearly)   : %f \nCompound Interest (Yearly) : %f \n", amount_yearly, interest_yearly);
    printf("\nCompound Amount (Half-Yearly)   : %f \nCompound Interest (Half-Yearly) : %f \n", amount_half_yearly, interest_half_yearly);
}
