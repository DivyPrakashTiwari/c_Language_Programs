#include <stdio.h>

// Function: main()
// Description: This is the entry point of the program. It initializes variables,
//              takes user input, and controls the execution of the loop.
int main()
{
    // Variable declarations
    int n, i, j, k;

    // Prompt user for input
    printf("Enter the number of rows in pattern: ");
    
    // Read user input and store it in variable 'n'
    scanf("%d", &n);

     printf("The pattern is : ");

    // Initialize variables 'i' and 'k'
    i = n;
    k = 0;

    // Loop through rows
    for (i; i > 0; i--)
    {
        // Increment 'k' for each row
        k = k + 1;

        // Initialize variable 'j'
        j = i;

        // Loop through columns
        for (j; j > 0; j--)
        {
            // Print the current value of 'k'
            printf("%d", k);
        }

        // Move to the next line
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
