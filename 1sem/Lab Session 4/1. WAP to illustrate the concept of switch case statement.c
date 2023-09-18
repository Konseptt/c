/*
1. WAP to illustrate the concept of switch case statement
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>>

int main() {
    int item, n1, n2, operation;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    printf("Select an operation :\n 1. Sum \n 2. Product \n 3. Sum of squares \n 4. Sum of cubes \n");
    scanf("%d", &item);
    switch(item) {
        case 1:
        operation = n1+n2;
        printf("The sum of numbers is: %d", operation);
        break;
        case 2:
        operation = n1*n2;
        printf("The product of numbers is: %d", operation);
        break;
        case 3:
        operation = pow(n1, 2)+pow(n2, 2);
        printf("The sum of squares of numbers is: %d", operation);
        break;
        case 4:
        operation = pow(n1, 3)+pow(n2, 3);
        printf("The sum of cubes of numbers is: %d", operation);
        break;
        default:
        printf("You entered invalid option for operation");
        break;
    }
    getch();
}
