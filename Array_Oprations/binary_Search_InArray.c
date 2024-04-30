#include<stdio.h>

int main()
{
    // Initialize variables to store array size, array elements, and search result
    int i,j,k,n,nn,low,up,mid,r;
    
    // Initialize counters for array sorting and search result
    k=0;
    r=0;
    
    // Prompt user to enter the size of the array
    printf("Enter the size of the array\n");
    
    // Read the size of the array from user input
    scanf("%d",&n);
    
    // Declare an array of size 'n' to store user input
    int arr[n];
    
    // Prompt user to enter elements for the array
    printf("Enter the element to the array\n");
    
    // Read array elements from user input
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    // Implement bubble sort algorithm to sort the array in ascending order
    for (i=0;i<n;i++)
    {
        for (j=n;j>=i;j--)
        {
            // Compare adjacent elements and swap if they are in wrong order
            if(arr[i]>arr[j])
            {
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    
    // Print the sorted array
    printf("array after sorting\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    
    // Prompt user to enter a number to be searched in the array
    printf("enter the number to be searched\n");
    
    // Read the search number from user input
    scanf("%d",&nn);
    
    // Initialize lower and upper bounds for binary search
    low=0;
    up=n-1;
    
    // Implement binary search algorithm to find the search number in the array
    for (i=0;i<n;i++)
    {
        mid=(low+up)/2;
        
        // Compare the search number with the middle element of the array
        if(nn>arr[mid])
        {
            // If the search number is greater, update the lower bound
            low=mid+1;
        }
        else if(nn<arr[mid])
        {
            // If the search number is smaller, update the upper bound
            up=mid-1;
        }
        else if(nn==arr[mid])
        {
            // If the search number is found, print the result and exit the loop
            printf("the number is present %d",nn);
            r=r+1;
            break;
        }
    }
    
    // If the search number is not found, print a message
    if(r!=1)
    {
        printf(" the entered number is not present");
    }   
    
    return 0;	
}