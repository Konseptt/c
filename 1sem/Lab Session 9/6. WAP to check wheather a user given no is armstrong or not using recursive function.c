/*
    6. WAP to check wheather a user given no is armstrong or not using recursive function.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int armstrong(int num,int len);
int armstrong(int num, int len) {
    if(num == 0) {
        return(0);
    } else {
        return(pow(num % 10, len) + armstrong(num / 10, len));
    }
}

int main() {
    int n, k , len, arm=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    k = n;
    len = log10(n) + 1;
    arm = armstrong(n, len);
    if(arm == k) {
        printf("'%d' is a armstrong number", n);
    } else {
        printf("'%d' is not an armstrong number.", n);
    }
    getch();
}
