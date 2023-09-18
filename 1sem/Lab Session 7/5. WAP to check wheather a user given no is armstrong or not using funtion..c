/*
    5. WAP to check wheather a user given no is armstrong or not using funtion.
*/
#include <stdio.h>
#include <math.h>

int get_armstr(int n) {
    int rem, res=0, t;
    t = log10(n) + 1;
    while (n != 0) {
        rem = n % 10;
        res += pow(rem, t);
        n = n / 10;
    }
    return res;
}

void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num == get_armstr(num)) {
        printf("The number %d is an armstrong number", num);
    } else {
        printf("The number %d is not an armstrong number", num);
    }
}
