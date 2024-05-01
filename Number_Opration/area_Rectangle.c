#include <stdio.h>

// Function to calculate the area of a rectangle
int arear(int x, int y)
{
    // Initialize the area variable
    int area;
    
    // Calculate the area of the rectangle
    area = x * y;
    
    // Return the area
    return area;	
}

int main()
{
    // Declare variables for length, breadth, and area
    int l, b, ar;
    
    // Prompt user to enter the length and breadth of the rectangle
    printf("Enter the length and breadth of the rectangle\n");
    
    // Read the length and breadth values from user input
    scanf("%d%d", &l, &b);
    
    // Calculate the area of the rectangle
    ar = arear(l, b);
    
    // Print the area of the rectangle
    printf("the area of the rectangle=%d ", ar);
    
    // Return 0 to indicate successful execution
    return 0;
}