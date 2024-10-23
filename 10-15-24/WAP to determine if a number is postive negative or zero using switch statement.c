#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int state;

    if (number > 0) {
        state = 1; 
    } else if (number < 0) {
        state = -1; 
    } else {
        state = 0; 
    }

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
            break;
    }

    return 0;
}
