#include <stdio.h>
#include <conio.h>

int main()
{
    char i,pin[3],correct_pin[]={2,0,7,7},x;
    printf("enter pin ");
    for(i=0;i<=3;i++)
    {
        x= getch();
        pin[i] = (int)x;
    }
    for(i=0;i<=3;i++)
    {
        printf("\npin: %d  || correct: %d", pin[i], correct_pin[i]);
        if(pin[i] != correct_pin[i])
        {
            printf("wrong pin");
            //return(0);
            //break;
        }
    }
    printf("unlocked");
    getch();
    return(0);

}
