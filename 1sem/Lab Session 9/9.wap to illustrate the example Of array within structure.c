/*
    9.wap to illustrate the example Of array within structure
*/

#include <stdio.h>
#include <conio.h>

struct student {
    char name[30];
    int st_class;
    int rollno;
};

void main() {
    struct student s[10];
    int i, n;
    printf ("Enter the number of students : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        printf ("Enter the Name, class and roll no of student '%d' : \n", i);
        scanf("%s%d%d", &s[i].name, &s[i].st_class, &s[i].rollno);
    }
    printf("The details of students are: \n\n");
    for(i=1; i<=n; i++) {
        printf("Name\t\t: %s\nClass\t\t: %d\nRoll no\t\t: %d\n\n", s[i].name, s[i].st_class, s[i].rollno);
    }
    getch();
}
