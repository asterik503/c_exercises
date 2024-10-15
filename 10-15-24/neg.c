#include <stdio.h>

int main() {
    int number;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Create a variable to represent the state
    int state;

    if (number > 0) {
        state = 1; // Positive
    } else if (number < 0) {
        state = -1; // Negative
    } else {
        state = 0; // Zero
    }

    // Use switch statement to determine the number's state
    switch (state) {
        case 1:
            printf("%d is positive.\n", number);
            break;
        case -1:
            printf("%d is negative.\n", number);
            break;
        case 0:
            printf("%d is zero.\n", number);
            break;
        default:
            // This case will never be reached
            break;
    }

    return 0;
}
