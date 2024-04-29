#include <stdio.h>

// Function: main()
// Description: The main function where the program starts execution
int main()
{
    // Declare variables
    int i, j, n;

    // Prompt user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    printf("The pattern is : ");

    // Loop through rows from n to 1
    for (i = n; i >= 1; i--)
    {
        // Loop through spaces from 1 to n-i
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Loop through stars from 1 to i
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // Print a newline after each row
        printf("\n");
    }

    // Loop through rows from 1 to n
    for (i = 1; i <= n; i++)
    {
        // Loop through spaces from 1 to n-i
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Loop through stars from 1 to i
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // Print a newline after each row
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
