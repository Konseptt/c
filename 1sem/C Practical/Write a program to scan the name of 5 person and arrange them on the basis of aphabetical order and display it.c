/*
    Write a program to scan the name of 5 person and arrange them on the basis of aphabetical order and display it.
*/

#include <conio.h>
#include <stdio.h>

int main() {
    char name[5][20], tempstr[20];
    int i, j;
    printf("Enter the name of 5 person: \n");
    for(i=1; i<5; i++) {
        scanf("%s", &name[i]);
    }
    for(i=0; i<5; i++) {
        for(j=i+1; j<5; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(tempstr, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempstr);
            }
        }

    }
    printf("The name in alphabetical order is : \n");
    for(i=0; i<5; i++) {
        printf("%s\n", name[i]);
    }
    getch();
    return 0;

}
