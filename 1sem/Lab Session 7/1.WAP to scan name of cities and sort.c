/*
    1. Write a program to scan the name of five cities and sort them on the basis of alphabetical order and display it.
*/
#include <stdio.h>
#include <string.h>

void main() {
    char cities[4][30], temp[30], i, j;
    printf("Enter the name of 5 cities: \n", i);
    for(i=0; i<5; i++) {
        scanf("%s", cities[i]);
    }
    for(i=0; i<5; i++) {
        for(j=i+1; j<5; j++) {
            if( strcmp(cities[i], cities[j]) > 0) {
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }
    printf("The name of cities in alphabetical order is : \n");
    for(i=0; i<5; i++) {
        printf("%s\n", cities[i]);
    }
}
