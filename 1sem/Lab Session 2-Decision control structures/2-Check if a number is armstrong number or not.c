#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int d1, d2, d3, n, on, ams;
    printf("Enter a number : ");
    scanf("%d", &n);
    on = n;
    d1 = n%10;  //last
    n = n/10;
    d2 = n%10;  // middle
    n = n/10;
    d3 = n%10;  //first
    ams = pow(d1, 3)+pow(d2, 3)+pow(d3, 3);
    if (ams == on ) {
        printf("The number '%d' is an armstrong number", on);
    } else {
        printf("The number '%d' is not an armstrong number", on);
    }
    getch();
}
