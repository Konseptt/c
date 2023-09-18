/*
3. WAP to scan the values of days from 1-7 and display the corresponding day
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int day;
    printf("Enter the day from 1-7 : ");
    scanf("%d", &day);
    switch(day) {
        case 1:
        printf("SUNDAY");
        break;
        case 2:
        printf("MONDAY");
        break;
        case 3:
        printf("TUESDAY");
        break;
        case 4:
        printf("WEDNESDAY");
        break;
        case 5:
        printf("THURSDAY");
        break;
        case 6:
        printf("FRIDAY");
        break;
        case 7:
        printf("SATURDAY");
        break;
        default:
        printf("Enter valid day from 1 to 7");
        break;
    }
    getch();
}
