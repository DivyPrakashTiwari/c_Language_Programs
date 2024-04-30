#include <stdio.h>

// Function: main()
// Description: The main function where the program starts executing
int main()
{
    // Initialize variables
    int r1, r2, c1, c2, sum, i, j, pro1, pro2, k;

    // Set sum to 0
    sum = 0;

    // Prompt user to enter the number of rows and columns in matrix 1
    printf("Enter the number of rows and columns in the matrix 1\n");
    scanf("%d%d", &r1, &c1);

    // Declare matrix 1 with dynamic memory allocation based on user input
    int mat1[r1][c1];

    // Prompt user to enter the elements of matrix 1
    printf("Enter the elements to the matrix 1\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Print the elements of matrix 1
    printf("The elements of the matrix 1\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    // Prompt user to enter the number of rows and columns in matrix 2
    printf("Enter the number of rows and columns in the matrix 2\n");
    scanf("%d%d", &r2, &c2);

    // Declare matrix 2 with dynamic memory allocation based on user input
    int mat2[r2][c2];

    // Prompt user to enter the elements of matrix 2
    printf("Enter the elements to the matrix 2\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Print the elements of matrix 2
    printf("The elements of the matrix 2\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // Check if the number of columns in matrix 1 is equal to the number of rows in matrix 2
    if (c1 == r2)
    {
        // Declare matrix 3 with dynamic memory allocation based on user input
        int mat3[r2][c1];

        // Print the product of the matrices
        printf("The product of the matrices is\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k <= j; k++)
                {
                    pro1 = mat1[i][k] * mat2[i][j];
                    pro2 = mat1[i][k + 1] * mat2[i + 1][j];
                    sum = sum + pro1 + pro2;
                }
                printf("%d ", sum);
                sum = 0;
            }

            printf("\n");
        }

        // Calculate the resultant matrix
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mat3[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        // Print the resultant matrix
        printf("The resultant matrix mat3 is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%5d", mat3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        // Print error message if the number of columns in matrix 1 is not equal to the number of rows in matrix 2
        printf("The row and column values are not correct\n");
    }

    return 0;
}