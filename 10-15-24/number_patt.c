#include <stdio.h>

int main() {
    int rows;

    // Prompt user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); // Print numbers from 1 to i
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

