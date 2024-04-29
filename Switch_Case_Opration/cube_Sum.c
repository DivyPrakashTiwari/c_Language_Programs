#include <stdio.h>

// Function: main()
// Description: This is the entry point of the program.
int main()
{
    // Initialize variables: n, sum, i, cube
    int n, sum, i, cube;

    // Set sum to 0
    sum = 0;

    // Prompt user to enter the nth number to be summed as a cube
    printf("Enter the nth number to be summed as a cube: ");
    scanf("%d", &n);

    // Loop through numbers from 1 to n
    for (i = 1; i <= n; i++)
    {
        // Calculate the cube of the current number
        cube = i * i * i;

        // Add the cube to the sum
        sum = sum + cube;
    }

    // Print the sum of cubes of numbers from 1 to n
    printf("The sum of cubes of numbers from 1 to %d is %d\n", n, sum);

    // Return 0 to indicate successful execution
    return 0;
}