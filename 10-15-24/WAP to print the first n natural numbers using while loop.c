#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);


    printf("The first %d natural numbers are:\n", n);
    while (i <= n) {
        printf("%d ", i); 
        i++; 
    }
    printf("\n"); 

    return 0;
}

