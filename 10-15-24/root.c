#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    // Prompt user for coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Determine the nature of the roots using switch statement
    switch ((discriminant > 0) - (discriminant < 0)) {
        case 1: // Two distinct real roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct:\n");
            printf("Root 1: %.2f\n", root1);
            printf("Root 2: %.2f\n", root2);
            break;
        case 0: // One real root
            root1 = -b / (2 * a);
            printf("Roots are real and equal:\n");
            printf("Root: %.2f\n", root1);
            break;
        case -1: // No real roots
            printf("No real roots.\n");
            break;
        default:
            // This case should not be reached
            break;
    }

    return 0;
}

