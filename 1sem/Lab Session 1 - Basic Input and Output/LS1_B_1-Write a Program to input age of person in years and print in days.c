/*
    Write a Program to input age of person in years and print in days
*/

main() {
    float age_in_years;
    int age_in_days;
    printf("Enter your age in years : ");
    scanf("%f", &age_in_years);
    age_in_days = 365*age_in_years;
    printf("Your age in days is : %d days!", age_in_days);
}
