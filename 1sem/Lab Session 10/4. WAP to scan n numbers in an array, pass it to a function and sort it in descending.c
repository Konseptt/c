/*
    4. WAP to scan n numbers in an array, pass it to a function and sort it in descending
        order and display it in main

*/
#include <stdio.h>
#include <conio.h>

void sort_arr(int *numbers, int length);

void sort_arr(int *numbers, int length) {
    int temp, i, j;
    for (i=0; i<length; i++) {
        for (j=i+1; j<length; j++) {
            if (*(numbers+i) < *(numbers+j)) {
                temp = *(numbers+i);
                *(numbers+i) = *(numbers+j);
                *(numbers+j) = temp;
            }
        }
    }
}

void main() {
    int n, i, nums[100];
    printf("Enter the numbers of items: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }
    sort_arr(&nums, n);
    printf("The sorted array is : \n");
    for (i=0; i<n; i++) {
        printf("%d\n", nums[i]);
    }
    getch();
}
