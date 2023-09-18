/*
    2. WAP to illustrate concept of passing array to function

*/
#include <stdio.h>
#include <conio.h>

int sum_all(int num_array[], int items);

int sum_all(int num_array[], int items) {
    int i = 0, s=0;
    for (i=0; i<items; i++) {
        s = s + num_array[i];
    }
    return s;
}

void main() {
    int nums[100], sum, it, i;
    printf("Enters the no of items: \n");
    scanf("%d", &it);
    printf("Enters %d numbers to find sum of: \n", it);
    for (i=0; i<it; i++) {
        scanf("%d", &nums[i]);
    }
    sum = sum_all(nums, it);
    printf("The sum of numbers is: %d", sum);
    getch();
}
