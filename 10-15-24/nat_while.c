#include <stdio.h>

int main() {
    int n, i = 1;

    // Prompt user for input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if the input is positive
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with error code
    }

    // Use a while loop to display the first n natural numbers
    printf("The first %d natural numbers are:\n", n);
    while (i <= n) {
        printf("%d ", i); // Print the current natural number
        i++; // Increment the counter
    }
    printf("\n"); // New line for better output formatting

    return 0;
}

