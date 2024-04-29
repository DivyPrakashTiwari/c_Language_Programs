#include <stdio.h>

// Function: main()
// Description: This is the entry point of the program. It initializes variables,
//              takes user input, calculates the sum of the digits of the input number,
//              and prints the result.
int main()
{
    // Declare and initialize variables
    int n, j, sum;
    sum = 0;

    // Prompt the user to enter a number
    printf("Enter the number whose digits are to be summed: ");

    // Read the user input and store it in the variable 'n'
    scanf("%d", &n);

    // Loop through the digits of the number 'n'
    while (n > 0)
    {
        // Extract the least significant digit 'j' from 'n'
        j = n % 10;

        // Add the digit 'j' to the sum
        sum = sum + j;

        // Remove the least significant digit from 'n'
        n = n / 10;
    }

    // Print the sum of the digits of the number
    printf("The sum of the digits of the number is: %d\n", sum);

    // The program has executed successfully
    return 0;
}