#include <stdio.h>

int main() {
    int marks[5];
    int i;

    // Prompt user to enter marks
    printf("Enter the marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks of the students are:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}

