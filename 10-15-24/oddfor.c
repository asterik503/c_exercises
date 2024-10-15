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

    // Use a for loop to display the first n odd numbers
    printf("The first %d odd numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i + 1); // Generate odd numbers
    }
    printf("\n"); // New line for better output formatting

    return 0;
}

