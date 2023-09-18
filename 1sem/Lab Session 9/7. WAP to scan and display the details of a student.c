/*
    7. Create a structure called "student" with data member name,adress,id and faculty. WAP to scan and display the details of a student.
*/
#include<stdio.h>
#include<conio.h>

struct student {
    char name[32],address[64],faculty[16];
    int id;
};

int main() {
    struct student s;
    printf("Enter the Name, Address, Faculty and ID no of a student : \n");
    scanf("%s%s%s%d", &s.name, &s.address, &s.faculty, &s.id);
    printf("The details of student is: \n");
    printf("ID\t\t: %d\nName\t\t: %s\nAddress\t\t: %s\nFaculty\t\t: %s\n", s.id, s.name, s.address, s.faculty);
    getch();
}

