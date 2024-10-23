#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);


    printf("The first %d natural numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n"); 

    return 0;
}

