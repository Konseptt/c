/*
    5. WAP to find maximum number in array by passing it to function

*/
#include <stdio.h>
#include <conio.h>

int find_max(int numbers[], int length);

int find_max(int numbers[], int length) {
    int temp, i, max;
    max  = numbers[0];
    for (i=1; i<length; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

void main() {
    int max, i, n, nums[100];
    printf("Enter the numbers of items: ");
    scanf("%d", &n);
    printf("Enter %d numbers : \n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }
    max = find_max(nums, n);
    printf("The maximum number is : %d", max);

    getch();
}
