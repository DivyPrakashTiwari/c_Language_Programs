#include<stdio.h>

// Function: main()
// Description: The main function where the program starts execution
int main()
{
    // Variable declarations
    int i, j, n;

    // Prompt user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Nested loops to print the pattern
    for (i = 1; i <= n; i++)
    {
        // Inner loop to print leading spaces
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Inner loop to print the asterisks
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // Newline after each row
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}