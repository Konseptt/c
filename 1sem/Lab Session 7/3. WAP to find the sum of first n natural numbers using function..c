/*
    3. WAP to find the sum of first n natural numbers using function.
*/
#include <stdio.h>

int natural_sum(int r) {
    int i, s=0;
    for (i=1; i<=r; i++) {
        s = s + i;
    }
    return s;
}

void main() {
    int terms, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    sum = natural_sum(terms);
    printf("The sum of is : %d", sum);
}
