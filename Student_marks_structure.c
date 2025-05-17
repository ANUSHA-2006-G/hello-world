#include <stdio.h>

struct Student {
    char name[50];
    int marks[3];
};

int main() {
    struct Student students[3];
    float average;

    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        getchar();  // To consume newline character
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter marks for 3 subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }
}
