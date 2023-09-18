/*
    8. Create a structure called "employee". Wap to scan and display the details of two employee.
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

*/

#include <conio.h>
#include <stdio.h>

struct employee {
    char name[64], address[64], post[16], com_name[64];
};

void main() {
    struct employee employ;
    struct employee employ2;
    printf("\nEnter Name, Address, Post and name of company of first employee: ");
    scanf("%s%s%s%s", &employ.name, &employ.address, &employ.post, &employ.com_name);
    printf("\nEnter Name, Address, Post and name of company of second employee: ");
    scanf("%s%s%s%s", &employ2.name, &employ2.address, &employ2.post, &employ2.com_name);
    printf("\nThe details of employee are: \n");
    printf("Name\t:%s\nAddress\t:%s\nPost\t:%s\nCompany\t:%s", employ.name, employ.address, employ.post, employ.com_name);
    printf("Name\t:%s\nAddress\t:%s\nPost\t:%s\nCompany\t:%s", employ2.name, employ2.address, employ2.post, employ2.com_name);
    getch();
}
