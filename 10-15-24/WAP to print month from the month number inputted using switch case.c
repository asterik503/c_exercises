#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    int days;

    switch (month) {
        case 1:  
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10: 
        case 12: 
            days = 31;
            break;
        case 4:  
        case 6:  
        case 9:  
        case 11: 
            days = 30;
            break;
        case 2:  
            days = 28;
            break;
        default:
            printf("Error: Invalid month number. Please enter a number between 1 and 12.\n");
            return 1; 
    }

    printf("Total number of days in month %d: %d\n", month, days);

    return 0;
}

