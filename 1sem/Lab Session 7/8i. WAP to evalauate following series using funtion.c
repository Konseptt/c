/*
    8i. WAP to evalauate following series using funtion.
    1+4+9+16+.....+(n^2)
*/

#include <stdio.h>

int eval_func(int x);

int eval_func(int x) {
    int i, s=0;
    for(i=1; i<=x; i++) {
        s = s + (i*i);
    }
    return s;
}

void main() {
    int n, sum;
    printf("Enter the numbers of terms for series: ");
    scanf("%d", &n);
    sum = eval_func(n);
    printf("The sum of series is: %d", sum);
}
