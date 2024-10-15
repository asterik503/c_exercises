#include <stdio.h>

int main() {
    char ch;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any newline character

    // Convert to lowercase to handle both cases
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            // Check if the character is an alphabet
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not a valid alphabet character.\n", ch);
            }
            break;
    }

    return 0;
}

