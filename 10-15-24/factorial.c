#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // Use unsigned long long for large factorials

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is non-negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit with error code
    }

    // Use a for loop to calculate the factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Multiply factorial by the current number
    }

    // Display the result
    printf("The factorial of %d is: %llu\n", n, factorial);

    return 0;
}

