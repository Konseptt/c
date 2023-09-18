#include<stdio.h>
#include<conio.h>

void main()
{
   int year;
   printf("Enter a year : ");
   scanf("%d", &year);

   if ((   (year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)  )
      printf("Year '%d' is a leap year", year);
   else
      printf("Year '%d' is not a leap year", year);
    getch();
}
