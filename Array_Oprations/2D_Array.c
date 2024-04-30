#include <stdio.h>

// Function: main()
// Description: The main function where the program starts executing
int main()
{
    // Variables declaration
    int r1, c1, sum, i, j;

    // Initialize sum to 0
    sum = 0;

    // Prompt user to enter the number of rows and columns in matrix 1
    printf("Enter the number of rows and columns in the matrix 1\n");
    scanf("%d%d", &r1, &c1);

    // Check if the input is valid (i.e., both r1 and c1 are positive)
    if (r1 <= 0 || c1 <= 0)
    {
        printf("Invalid input. Both rows and columns must be positive.\n");
        return 1;
    }

    // Declare a 2D array 'mat1' with dimensions r1 x c1
    int mat1[r1][c1];

    // Prompt user to enter the elements of matrix 1
    printf("Enter the elements to the matrix 1\n");

    // Nested for loop to read elements of matrix 1 from user input
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Print the elements of matrix 1
    printf("The elements of the matrix 1 \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    // Calculate and print the sum of diagonal elements
    printf("Sum of diagonal elements is \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (i == j)
            {
                sum = sum + mat1[i][j];
                printf("%d ", sum);
            }
        }
        printf("\n");
    }

    // Return 0 upon successful execution
    return 0;
}