#include <stdio.h>

int main() {
    int n;

    // Prompt user for input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if the input is positive
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with error code
    }

    // Use a for loop to display the first n even numbers
    printf("The first %d even numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i); // Generate even numbers
    }
    printf("\n"); // New line for better output formatting

    return 0;
}

