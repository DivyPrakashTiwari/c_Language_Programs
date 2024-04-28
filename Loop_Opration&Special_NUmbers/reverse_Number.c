#include <stdio.h>

// Function: main()
// Description: This is the main function where the program starts execution.
int main()
{
    // Declare variables: n, i, j
    // n: holds the input number
    // i: holds a copy of the input number for later use
    // j: holds the remainder of n divided by 10 (the last digit of n)
    int n, i, j;

    // Prompt the user to enter a number
    printf("Enter the number whose reverse is to be found: ");

    // Read the input number from the user and store it in variable n
    scanf("%d", &n);

    // Make a copy of the input number and store it in variable i
    i = n;

    // Loop until n becomes 0
    while (n > 0)
    {
        // Get the last digit of n by finding the remainder of n divided by 10
        j = n % 10;

        // Print the last digit of n
        printf("%d", j);

        // Remove the last digit of n by dividing n by 10
        n = n / 10;
    }

    // Print the original number and its reverse
    printf(" is the reverse of the number %d", i);

    // The program has executed successfully
    return 0;
}