/*
7. Write a program to scan the name address and phone of a 5 person and display it
*/

#include <stdio.h>
#include <conio.h>

int main() {
    int i;
    char name[5][32], address[5][32], phone[5][10];
    for(i=1; i<=5; i++) {
        printf("Enter your Name, Address and Phone number of person %d : \n", i);
        scanf("%s%s%s", &name[i], &address[i], &phone[i]);
        printf("%s", phone[i]);
        printf("\n");
    }
    printf("Name\t\t Address\t\t Phone\n");
    printf("-------\t\t -------\t\t -------\n");
    for(i=1; i<=5; i++) {
        printf("%s\t\t %s\t\t %s\n", name[i], address[i], phone[i]);
    }
    getch();
    return 0;

}
