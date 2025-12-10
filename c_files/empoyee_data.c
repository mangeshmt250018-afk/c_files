#include <stdio.h>

struct EMPLOYEE {
    char name[50], designation[50], gender[10], date_of_joining[20];
    float salary;
};

int main() {
    struct EMPLOYEE e;

    printf("Enter Employee name: ");
    scanf("%s", e.name);

    printf("Enter designation: ");
    scanf("%s", e.designation);

    printf("Enter Gender: ");
    scanf("%s", e.gender);

    printf("Enter date_of_joining: ");
    scanf("%s", e.date_of_joining);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\n#---------------- EMPLOYEE DETAILS ----------------#\n");
    printf("Name: %s\n", e.name);
    printf("Designation: %s\n", e.designation);
    printf("Gender: %s\n", e.gender);
    printf("Date of joining: %s\n", e.date_of_joining);
    printf("Salary: %.2f\n", e.salary);

    printf("\nUpdate salary: ");
    scanf("%f", &e.salary);

    printf("Update designation: ");
    scanf("%s", e.designation);

    printf("\n#------------- UPDATED EMPLOYEE DETAILS ------------#\n");
    printf("Name: %s\n", e.name);
    printf("Designation: %s\n", e.designation);
    printf("Gender: %s\n", e.gender);
    printf("Date of joining: %s\n", e.date_of_joining);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}
