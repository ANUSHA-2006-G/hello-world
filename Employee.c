#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[5];
    printf("Enter information for 5 employees:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
}
