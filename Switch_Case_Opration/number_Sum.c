#include <stdio.h>

// Function: main()
// Description: The main function where the program starts executing
int main()
{
    // Declare and initialize variables
    int n, sum, i;
    sum = 0;

    // Prompt user to enter the nth number to be summed
    printf("Enter the nth number to be summed: ");
    
    // Read user input for the nth number
    scanf("%d", &n);

    // Loop through numbers from 1 to n
    for (i = 1; i <= n; i++)
    {
        // Add the current number to the sum
        sum = sum + i;
    }

    // Print the sum of the nth number
    printf("The sum of the nth number is: %d\n", sum);

    // Return 0 to indicate successful execution
    return 0;
}