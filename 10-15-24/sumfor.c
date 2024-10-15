#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt user for input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if the input is positive
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with error code
    }

    // Use a for loop to calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i; // Add i to sum
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

