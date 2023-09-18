/*
    4i. Write a program to find the sum of following series using recursive function
      1+4+9+16+.....+(n^2)
*/
#include <stdio.h>
int sum_series(int t);
int sum_series(int t) {
    printf("%d\n",t);
    if ( t == 1) {
        return 1;
    } else {
        return (t*t)+(sum_series(t-1));
    }
}
int main() {

    printf("%d", sum_series(4));
}

