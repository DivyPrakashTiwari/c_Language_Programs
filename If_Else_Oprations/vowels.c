// This program checks whether a given character is a vowel or a consonant

#include <stdio.h>

int main() {
    // Declare a character variable 'le'
    char le;

    // Prompt the user to enter a character
    printf("Enter the character\n");
    scanf("%c", &le);

    // Check if the entered character is a vowel
    if (le == 'a' || le == 'e' || le == 'i' || le == 'o' || le == 'u') {
        // If the character is a vowel, print the result
        printf("The character is vowel\n");
    }
    // If the character is not a vowel, it is a consonant
    else {
        // Print the result for a consonant
        printf("The charcter is consonants\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}