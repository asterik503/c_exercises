#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch ((discriminant > 0) - (discriminant < 0)) {
        case 1: 
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct:\n");
            printf("Root 1: %.2f\n", root1);
            printf("Root 2: %.2f\n", root2);
            break;
        case 0: 
            root1 = -b / (2 * a);
            printf("Roots are real and equal:\n");
            printf("Root: %.2f\n", root1);
            break;
        case -1: 
            printf("No real roots.\n");
            break;
        default:
            break;
    }

    return 0;
}

