#include <stdio.h>

int main() {
    char ch;
    
    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if it's a vowel (uppercase or lowercase)
    if ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') || 
        (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
        printf("Vowel\n");
    }
    // Check if it's a consonant (Alphabet but not a vowel)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant\n");
    }
    // Check if it's a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // If none of the above, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
