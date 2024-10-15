#include <stdio.h>

int main() {
    int month;

    // Prompt user for input
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Variable to hold the number of days
    int days;

    // Determine the number of days in the given month
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2:  // February
            // Assuming a non-leap year for simplicity
            days = 28;
            break;
        default:
            printf("Error: Invalid month number. Please enter a number between 1 and 12.\n");
            return 1; // Exit the program with an error code
    }

    // Print the number of days
    printf("Total number of days in month %d: %d\n", month, days);

    return 0;
}

