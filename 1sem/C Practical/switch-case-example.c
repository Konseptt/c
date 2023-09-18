/*
Example switch case
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {

    int n, res, choice;
    printf("The operations are -\n 1. Square\n 2. Cube\n 3. Fourth power\n");
    printf("\nEnter the number: ");
    scanf("%d", &n);
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        res=pow(m, 2);
        printf("The square of number is : %d", res);
        break;

        case 2:
        res=pow(m, 3);
        printf("The cube of number is : %d", res);
        break;

        case 3:
        res=pow(m, 4);
        printf("The fourth power of number is : %d", res);
        break;

        default:
        printf("You entered a Invalid chhoice, Enter a valid choice from 1->3");
    }
    getch();
}
