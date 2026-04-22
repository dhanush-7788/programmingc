#include <stdio.h>

int main() {
    char name[50];
    int id, age;
    float marks;
    char grade;

    // Input details
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Assign grade
    if (marks >= 90)
        grade = 'A';
    else if (marks >= 75)
        grade = 'B';
    else if (marks >= 60)
        grade = 'C';
    else if (marks >= 50)
        grade = 'D';
    else
        grade = 'F';

    // Output details
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", name);
    printf("ID    : %d\n", id);
    printf("Age   : %d\n", age);
    printf("Marks : %.2f\n", marks);
    printf("Grade : %c\n", grade);

    return 0;
}