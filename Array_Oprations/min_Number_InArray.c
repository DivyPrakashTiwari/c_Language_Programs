#include <stdio.h>

// Function: main()
// Description: The main function where the program starts execution
int main()
{
    // Declare and initialize variables
    int n, i, min, mint;

    // Prompt user to enter the size of the array
    printf("Enter the size of the array\n");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Prompt user to enter numbers in the array
    printf("enter the numbers in the array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize 'min' with the first element of the array
    min = arr[0];

    // Loop through the array to find the minimum number
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Print the minimum number
    printf("the min number is %d\n", min);

    // Initialize 'mint' with the second element of the array
    mint = arr[1];

    // Loop through the array to find the second smallest number
    for (i = 0; i < n; i++)
    {
        // Check if the current number is greater than 'min' and less than 'mint'
        if (arr[i] > min && arr[i] < mint)
        {
            mint = arr[i];
        }
    }

    // Print the second smallest number
    printf("the second smallest number is %d\n", mint);

    // Return 0 to indicate successful execution
    return 0;
}