#include <stdio.h>

// Function: main()
// Description: The main function where the program starts executing
int main()
{
    // Declare an integer variable 'n' to store the user's choice
    int n;

    // Declare a character variable 'ch' to store the user's input character
    char ch;

    // Prompt the user to enter a character
    printf("Enter the character: ");
    scanf("%c", &ch);

    // Display the menu options for the user
    printf("1. For checking vowels\n");
    printf("2. For checking consonants\n");

    // Prompt the user to enter their choice
    printf("Enter your choice: ");
    scanf("%d", &n);

    // Use a switch statement to handle the user's choice
    switch (n)
    {
        // Case 1: Check if the character is a vowel
        case 1:
        {
            // Use an if-else statement to check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                // If the character is a vowel, print the result
                printf("The character %c is a vowel.\n", ch);
            }
            else
            {
                // If the character is not a vowel, print the result
                printf("The character %c is not a vowel.\n", ch);
            }

            // Break the switch statement
            break;
        }

        // Case 2: Check if the character is a consonant
        case 2:
        {
            // Use an if-else statement to check if the character is a consonant
            if (ch!= 'a' && ch!= 'e' && ch!= 'i' && ch!= 'o' && ch!= 'u')
            {
                // If the character is a consonant, print the result
                printf("The character %c is a consonant.\n", ch);
            }
            else
            {
                // If the character is not a consonant, print the result
                printf("The character %c is not a consonant.\n", ch);
            }

            // Break the switch statement
            break;
        }

        // Default case: Handle invalid input
        default:
        {
            // Print an error message for invalid input
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}