/*
Write a program to take second as input and display it in hour minute and second in hh:mm:ss format
*/

#include<stdio.h>


main() {

    int seconds, minutes, hours;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = (seconds/3600);
    seconds = (seconds%3600);
    minutes = (seconds/60);
    seconds = (seconds%60);

    printf("Time in hh:mm:ss format is %d:%d:%d", hours, minutes, seconds);
    return(0);
}

