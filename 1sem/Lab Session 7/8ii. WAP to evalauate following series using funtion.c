/*
    8ii. WAP to evalauate following series using funtion.
    f(x)=x+x^2+x3+.....+x^n
*/

#include <stdio.h>
#include <math.h>

int eval_func(int x, int n);

int eval_func(int x, int n) {
    int i, s=0;
    for(i=1; i<=n; i++) {
        s = s + pow(x, i);
    }
    return s;
}

void main() {
    int n, x, sum;
    printf("Enter the value of x and numbers of terms for series: ");
    scanf("%d%d", &x, &n);
    sum = eval_func(x, n);
    printf("The sum of series is: %d", sum);
}
