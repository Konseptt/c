/*
    6. Create a structure named student with data members name address and id and sort the data of structures on the basis of alphabetical order
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student {
    char name[32], address[64];
    int id;
};

int main() {
    int i, j, n;
    struct student stud[10], temp;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("Enter id, name and address of student %d : \n" ,i+1);
        scanf("%d%s%s", &stud[i].id, &stud[i].name, &stud[i].address);
    }
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if( strcmp(stud[i].name, stud[j].name) > 0) {
                temp = stud[i];
                stud[i] = stud[j];
                stud[j] = temp;
            }
        }
    }
    printf("The sorted list of students by name is : \n");
    printf("ID\t\tName\t\tAddress\n");
    for (i=0; i<n; i++) {
        printf("%d\t\t%s\t\t%s\n", stud[i].id, stud[i].name, stud[i].address);
    }

}
