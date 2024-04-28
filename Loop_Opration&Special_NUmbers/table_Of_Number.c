#include <stdio.h>

// Function declaration for the main function
int main() 
{
    // Variable declarations for integers n, i, j, and pro
    int n, i, j, pro;

    // Prompt the user to enter the number for which the table is to be displayed
    printf("Enter the number who's table to be displayed ");
    // Scan and store the input value in variable n
    scanf("%d", &n);

    // Loop from 1 to 10 (inclusive) for the table
    for (i = 1; i < 11; i++) {
        // Calculate the product of n and i
        pro = n * i;

        // Print the result in the format: n * i = pro
        printf("%d*%d=%d\n", n, i, pro);
    }

    // Return 0 to indicate successful execution
    return 0;
}