#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;
    float average;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);


    while (i <= n) {
        sum += i; 
        i++; 
    }

    average = (float)sum / n;

    printf("The average of the first %d natural numbers is: %.2f\n", n, average);

    return 0;
}

