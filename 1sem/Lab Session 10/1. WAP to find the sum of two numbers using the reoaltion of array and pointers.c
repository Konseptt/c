/*
    1. WAP to find the sum of two numbers using the reoaltion of array and pointers

*/
#include <stdio.h>
#include <conio.h>

void sum_nums(int a, int b, int *sum);

void sum_nums(int a, int b, int *sum) {
    *sum = (a + b);
}

void main() {
    int nums[2], sum=0;
    printf("Enters two numbers to find sum of: \n");
    scanf("%d%d", &nums[0], &nums[1]);
    sum_nums(nums[0], nums[1], &sum);
    printf("The sum of %d and %d is : %d", nums[0], nums[1], sum);
    getch();
}
