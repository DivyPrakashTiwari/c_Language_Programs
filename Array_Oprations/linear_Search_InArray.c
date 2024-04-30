#include<stdio.h>

int main()
{
    // Declare variables to store the size of the array, the array itself, and the number to be searched
    int n, nn, i, s;
    
    // Initialize the counter for the searched number to 0
    nn = 0;
    
    // Prompt the user to enter the size of the array
    printf("Enter the size of array\n");
    
    // Read the size of the array from the user
    scanf("%d", &n);
    
    // Declare an array of size 'n'
    int arr[n];
    
    // Prompt the user to enter the numbers in the array
    printf("Enter the numbers in array \n");
    
    // Read the numbers from the user and store them in the array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Prompt the user to enter the number to be searched
    printf("Enter the number to be searched\n");
    
    // Read the number to be searched from the user
    scanf("%d", &s);
    
    // Search for the number in the array
    for (i = 0; i <= n; i++)
    {
        // Check if the current element in the array matches the searched number
        if (arr[i] == s)
        {
            // If a match is found, print a success message and increment the counter
            printf("the searched number is present %d", arr[i]);
            nn = nn + 1;
        }
    }
    
    // If the counter is still 0, the searched number was not found
    if (nn!= 1)
    {
        printf("the searched number is not present");
    }
    
    return 0;
}