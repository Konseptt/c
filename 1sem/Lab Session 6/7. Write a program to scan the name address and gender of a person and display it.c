/*
7. Write a program to scan the name address and gender of a person and display it
*/

#include <stdio.h>
#include <conio.h>

int main() {
    char name[32], address[32], gender[8];
    printf("Enter your Name, Address and Gender : \n");
    scanf("%s%s%s", &name, &address, &gender);
    printf("Name\t: %s \nAddress\t: %s \nGender\t: %s", name, address, gender);
    getch();
    return 0;

}
