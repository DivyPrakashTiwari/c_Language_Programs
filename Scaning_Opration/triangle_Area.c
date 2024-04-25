// Include the standard input/output library
#include<stdio.h>

// Define the main function
int main()
{
    // Declare three integer variables: tb (triangle base), th (triangle height), and at (triangle area)
    int tb, th, at;

    // Prompt the user to enter the height of the triangle
    printf ("enter the height of the triangle\n");

    // Read the input value for the triangle height and store it in the variable th
    scanf ("%d",&th);

    // Prompt the user to enter the base of the triangle
    printf ("enter the base of the triangle\n");

    // Read the input value for the triangle base and store it in the variable tb
    scanf ("%d",&tb);

    // Calculate the area of the triangle using the formula 0.5 * base * height
    at = 0.5*th*tb;

    // Print the result of the triangle area calculation
    printf ("area of triangle=%d\n",at);

    // The main function returns 0 to indicate successful execution
    return 0;
}