// Include the standard input/output library
#include <stdio.h>

// Define the main function, which is the entry point of the program
int main() 
{
    // Declare four integer variables: l (length), b (breadth), pr (perimeter), and ar (area)
    int l, b, pr, ar;

    // Prompt the user to enter the length of the rectangle
    printf("enter the length of the rectangle\n");

    // Read the input for the length of the rectangle
    scanf("%d", &l);

    // Prompt the user to enter the breadth of the rectangle
    printf("enter the breadth of the rectangle\n");

    // Read the input for the breadth of the rectangle
    scanf("%d", &b);

    // Calculate the perimeter of the rectangle using the formula 2 * (length + breadth)
    pr = 2 * (l + b);

    // Calculate the area of the rectangle using the formula length * breadth
    ar = l * b;

    // Print the perimeter of the rectangle
    printf("perimeter of rectangle=%d\n", pr);

    // Print the area of the rectangle
    printf("area of rectangle=%d\n", ar);

    // Return 0 to indicate that the program has executed successfully
    return 0;
}