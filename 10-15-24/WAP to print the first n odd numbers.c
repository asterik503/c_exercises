#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);


    printf("The first %d odd numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i + 1); 
    }
    printf("\n"); 

    return 0;
}

