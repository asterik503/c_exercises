#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Prompt user for input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if the input is positive
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with error code
    }

    // Use a while loop to calculate the sum of the first n natural numbers
    while (i <= n) {
        sum += i; // Add the current number to sum
        i++; // Increment the counter
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

