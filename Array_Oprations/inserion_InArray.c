#include <stdio.h>

// Function: main()
// Description: The main function where the program starts executing
int main()
{
    // Declare variables
    int n, nn, i, p;

    // Prompt user to enter the size of the array
    printf("Enter the size of array\n");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Prompt user to enter the numbers in the array
    printf("Enter the numbers in array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Prompt user to enter the desired position
    printf("Enter the desired position to enter the element\n");
    scanf("%d", &p);

    // Prompt user to enter the number
    printf("Enter the element\n");
    scanf("%d", &nn);

    // Replace the number at the desired position with the entered number
    for (i = p; i <= p; i++)
    {
        arr[i - 1] = nn;
    }

    // Print the array after manipulation
    printf("array after the manipulation\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
