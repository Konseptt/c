/*
    4. WAP to check wheather a user given no is palindrome or not using funtion.
*/
#include <stdio.h>
#include <math.h>

int reverse(int n) {
    int rev=0, i, j, t, r;
    t = log10(n) + 1;
    for(i=1; i<=t; i++) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}

void main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == reverse(num)) {
        printf("The number %d is a palindrome.", num);
    } else {
        printf("The number %d is not a palindrome.", num);
    }
}
