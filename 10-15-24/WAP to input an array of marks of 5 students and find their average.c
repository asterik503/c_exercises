#include <stdio.h>

int main() {
    int marks[5];
    int i;
    float average, sum = 0.0;
    printf("Enter the marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]); 
        sum += marks[i]; 
    }
    average = sum / 5;
    printf("\nThe average marks of the students is: %.2f\n", average);

    return 0;
}

