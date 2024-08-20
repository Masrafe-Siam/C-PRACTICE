#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int rollNumber;
    int marks;
};

// Function to swap two students
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on an array of students based on their marks
void sortStudents(struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        // Last i students are already sorted
        for (int j = 0; j < numStudents - i - 1; j++) {
            // Compare adjacent students based on their marks and swap if necessary
            if (students[j].marks > students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void addStudent(struct Student students[], int *numStudents) {
    if (*numStudents >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter name: ");
    scanf("%s", newStudent.name);

    printf("Enter roll number: ");
    scanf("%d", &newStudent.rollNumber);

    printf("Enter marks: ");
    scanf("%d", &newStudent.marks);

    students[*numStudents] = newStudent;
    (*numStudents)++;

    printf("Student added successfully.\n");
}

void displayStudents(struct Student students[], int numStudents) {
    printf("Student List:\n");

    for (int i = 0; i < numStudents; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %d\n\n", students[i].marks);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    do {
        printf("Student Grade Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Sort Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &numStudents);
                break;
            case 2:
                displayStudents(students, numStudents);
                break;
            case 3:
                sortStudents(students, numStudents);
                printf("Students sorted by marks.\n");
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    } while (choice != 4);

    return 0;
}
