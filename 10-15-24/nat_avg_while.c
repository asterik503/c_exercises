#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;
    float average;

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

    // Calculate the average
    average = (float)sum / n;

    // Display the result
    printf("The average of the first %d natural numbers is: %.2f\n", n, average);

    return 0;
}

