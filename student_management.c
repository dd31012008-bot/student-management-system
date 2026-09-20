#include <stdio.h>

struct Student {
    int id;
    char name[30];
    float mark;
};

int main() {
    struct Student s[50];
    int n, i, search;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Mark: ");
        scanf("%f", &s[i].mark);
    }

    printf("\n--- Student Details ---\n");
    for(i = 0; i < n; i++)
        printf("ID: %d  Name: %s  Mark: %.2f\n",
               s[i].id, s[i].name, s[i].mark);

    printf("\nEnter ID to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(s[i].id == search) {
            printf("Found: %s - %.2f\n", s[i].name, s[i].mark);
            return 0;
        }
    }

    printf("Student not found\n");
    return 0;
}
