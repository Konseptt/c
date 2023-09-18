/*
    8. Create a structure called "employee". WAP to scan and display the details of n employee.
*/
#include<stdio.h>
#include<conio.h>

struct employee {
    char name[20][32], address[20][64], post[20][16];
    int id[20];
    float salary[20];
};


int main() {
    struct employee e;
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        printf("Enter the ID, Name, Address, Post and salary of employee '%d': \n", i);
        scanf("%d%s%s%s%f", &e.id[i], &e.name[i], &e.address[i], &e.post[i], &e.salary[i]);
    }
    printf("The details of employees are: \n\n");
    for (i=1; i<=n; i++) {
        printf("ID\t\t: %d\nName\t\t: %s\nAddress\t\t: %s\nPost\t\t: %s\nSalary\t\t: %f\n\n", e.id[i], e.name[i], e.address[i], e.post[i], e.salary[i]);
    }
    getch();
}

