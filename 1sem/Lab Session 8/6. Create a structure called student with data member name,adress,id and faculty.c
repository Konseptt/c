/*
    7. Create a structure called student with data member name,adress,id and faculty.
        Wap to scan and display the details of a student.
*/

#include <conio.h>
#include <stdio.h>

struct student {
    int id;
    char name[64], address[64], faculty[16];
};

void main() {
    struct student stud;
    printf("Enter Id, Name, Address and faculty of student: ");
    scanf("%d%s%s%s", &stud.id, &stud.name, &stud.address, &stud.faculty);
    printf("\nThe details of student are: \n");
    printf("ID\t:%d\nName\t:%s\nAddress\t:%s\nFaculty\t:%s", stud.id, stud.name, stud.address, stud.faculty);
    getch();
}
