#include<stdio.h>

int main()
{
    // Declare variables to store the size of the array, array elements, and the desired position
    int n, nn, i, p;

    // Prompt the user to enter the size of the array
    printf("Enter the size of array\n");

    // Read the size of the array from the user
    scanf("%d",&n);

    // Declare an array of size 'n' to store the array elements
    int arr[n];

    // Prompt the user to enter the numbers in the array
    printf("Enter the numbers in array \n");

    // Read the array elements from the user
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Prompt the user to enter the desired position
    printf("Enter the desired position\n");

    // Read the desired position from the user
    scanf("%d",&p);

    // Set the element at the desired position to 0
    for (i=p;i<=p;i++)
    {
        arr[i-1]=0;
    }

    // Print the array after manipulation
    printf("array after the manupilation\n");

    // Print each element of the array
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;	
}