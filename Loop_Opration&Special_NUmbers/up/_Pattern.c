#include <stdio.h>

// Function prototype for the main function
int main() {
    // Declare and initialize variables
    int n, i, j;
    i = 1;

    // Prompt user to enter the number of rows in the pattern
    printf("Enter the number of rows in pattern ");
    // Scan and store the input value in variable n
    scanf("%d", &n);

    // Loop through rows
    for (i; i <= n; i++) {
        // Loop through columns
        for (j = 1; j <= i; j++) {
            // Print an asterisk
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}