/*
6. Write a program to scan and display 10 numbers in an array.
*/
int main() {
    int a[10], i;
    printf("Enter 10 numbers in an array: \n");
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    printf("The 10 numbers in an are: \n");
    for (i=0; i<10; i++) {
        printf("%d\n", a[i]);
    }
    getch();
    return(0);
}
