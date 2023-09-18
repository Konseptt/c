/*
    8iii. WAP to evalauate following series using funtion.
    1+2/2!+3/3!+.....+ n/n!
*/

#include <stdio.h>
#include <math.h>

float eval_func(int n);
int facto(int n);


int facto(int n) {
    int fact = 1, i;
    while(n > 1 ) {
        fact = fact*n;
        n--;
    }
    return fact;
}

float eval_func(int n) {
    int i;
    float s=0.0;
    for(i=1; i<=n; i++) {
        s = s + (i/(float)facto(i));
    }
    return s;
}

void main() {
    int n, x;
    float sum;
    printf("Enter the numbers of terms for series: ");
    scanf("%d", &n);
    sum = eval_func(n);
    printf("The sum of series is: %f", sum);
}
