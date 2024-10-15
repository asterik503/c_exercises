#include <stdio.h>

int main() {
    int marks[5]; // Array to store marks of 5 students
    int i;
    float average, sum = 0.0; // Variable to store sum and average

    // Prompt user to enter marks
    printf("Enter the marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]); // Read marks for each student
        sum += marks[i]; // Add the marks to sum
    }

    // Calculate the average
    average = sum / 5;

    // Display the average
    printf("\nThe average marks of the students is: %.2f\n", average);

    return 0;
}

