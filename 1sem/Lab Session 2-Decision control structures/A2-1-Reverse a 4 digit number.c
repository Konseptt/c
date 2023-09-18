#include<stdio.h>
#include<conio.h>

void main ()
{
    int d1, d2, d3, d4, n, rn;
    printf("Enter a four digit number : ");
    scanf("%d", &n);
    d1 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d4 = n%10;
    n = n/10;
    rn = (1000*d1)+(100*d2)+(10*d3)+d4;
    printf("The reversed number is: %d", rn);
    getch();
}
