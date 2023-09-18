/*
Example of nested if else statement
*/
#include<stdio.h>
#include<conio.h>

void main() {

    int age;
    printf("Enter the age of person\n");
    scanf("%d", &age);
    if (age >= 18 )
    (
        if (age>=60) {
            printf("The person can vote and is dependent.");
        } else {
            printf("This is a working group and can vote");
        }

    ) else {

        if(age >= 16) {
            printf("Working age group but cannot vote");
        } else {
            printf("Dependent and cannot vote");
        }
    }
    getch();
}
