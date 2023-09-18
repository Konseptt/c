/*
    10. Write a program to scan n number in an array and display it in reverse order.
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int a[100], n, i;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    printf("Enter %d numbers of: \n", n);
    for (i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }
    printf("The reversed order is:\n");
    while (n > 0) {
        printf("%d\n", a[n]);
        n--;
    }
    getch();
    return(0);
}


