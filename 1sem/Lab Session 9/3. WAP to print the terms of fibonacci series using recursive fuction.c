/*
    3. WAP to print the terms of fibonacci series using recursive fuction
*/
#include <stdio.h>
#include <conio.h>

int fibonacci(int n);
int fibonacci(int n) {
    if(n == 1) {
        return(0);
    } else if(n == 2) {
        return(1);
    } else {
        return(fibonacci(n - 1) + fibonacci(n - 2));
    }
}

void main() {
    int n,i,fib;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The fibonacci series is: \n");
    for(i=1; i<=n; i++) {
        fib = fibonacci(i);
        printf("%d, ",fib);
    }
    getch();
}
