#include <stdio.h>

// Function: main()
// Description: The main function where the program starts execution
int main()
{
    // Declare and initialize variables
    int n, i, max;
    max = 0;

    // Prompt user to enter the size of the array
    printf("Enter the size of the array\n");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Prompt user to enter the numbers in the array
    printf("enter the numbers in array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Iterate through the array to find the maximum number
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Print the maximum number found in the array
    printf("the max number is %d", max);

    return 0;
}