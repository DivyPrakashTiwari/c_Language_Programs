#include <stdio.h>

// Function prototype for the main function
int main() {
    // Declare and initialize variables
    int n, i, j;

    // Prompt user to enter the number of rows in the pattern
    printf("Enter the number of rows in the pattern: ");
    // Read user input and store it in the variable 'n'
    scanf("%d", &n);

     printf("The pattern is : ");

    // Loop through the rows from the last to the first
    for (i = n; i > 0; i--) {
        // Loop through the columns from the current row to the first
        for (j = i; j > 0; j--) {
            // Print an asterisk symbol
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
