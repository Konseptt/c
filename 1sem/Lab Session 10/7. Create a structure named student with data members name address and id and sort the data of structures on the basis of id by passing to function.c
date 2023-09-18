/*
    7. Create a structure named student with data members name address and id and sort the data of structures on the basis of id by passing to function
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student {
    char name[32], address[64];
    int id;
};
void sort_by_id(struct student *s, int count);
void sort_by_id(struct student *s, int count) {
    struct student temp;
    int i, j;
    for (i=0; i<count; i++) {
        printf("%d\t\t%s\t\t%s\n", s[i].id, s[i].name, s[i].address);
    }
    for (i=0; i<count; i++) {
        for (j=i+1; j<count; j++) {
            if ( s[i].id > s[j].id) {
                temp = s[i];
                s[j] = s[j];
                s[j] = temp;
            }
        }
    }
    return s;
}
int main() {
    int i, j, n;
    struct student stud[10], temp, sorted[10];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("Enter id, name and address of student %d : \n" ,i+1);
        scanf("%d%s%s", &stud[i].id, &stud[i].name, &stud[i].address);
    }
    sort_by_id(stud, n);
    printf("The sorted list of students by name is : \n");
    printf("ID\t\tName\t\tAddress\n");
    //for (i=0; i<n; i++) {
    //    printf("%d\t\t%s\t\t%s\n", sorted[i].id, sorted[i].name, sorted[i].address);
   //}

}
