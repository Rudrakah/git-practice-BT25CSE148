#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1, e2;

    printf("Enter first employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter first employee name: ");
    scanf(" %[^\n]", e1.name);

    printf("Enter first employee salary: ");
    scanf("%f", &e1.salary);

    printf("\nEnter second employee ID: ");
    scanf("%d", &e2.id);

    printf("Enter second employee name: ");
    scanf(" %[^\n]", e2.name);

    printf("Enter second employee salary: ");
    scanf("%f", &e2.salary);

    printf("\nEmployee Details\n");

    printf("\nEmployee 1: %s", e1.name);
    printf("\nID: %d", e1.id);
    printf("\nSalary: %.2f", e1.salary);

    printf("\n\nEmployee 2: %s", e2.name);
    printf("\nID: %d", e2.id);
    printf("\nSalary: %.2f", e2.salary);

    printf("\n\nSalary Comparison:\n");

    if (e1.salary > e2.salary)
        printf("%s has higher salary.\n", e1.name);
    else if (e2.salary > e1.salary)
        printf("%s has higher salary.\n", e2.name);
    else
        printf("Both employees have equal salaries.\n");

    return 0;
}