/*
7. Write a program find the sum of n numbers in an array.

*/
int main() {
    int a[100], i, n, s=0;
    printf("Enter the length of array: \n");
    scanf("%d", &n);
    printf("Enter %d numbers in an array: \n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++) {
        s = s + a[i];
    }
    printf("The sum of numbers in array is : %d", s);
    getch();
    return(0);
}
