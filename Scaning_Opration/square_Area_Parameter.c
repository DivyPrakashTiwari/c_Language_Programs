// This program calculates and displays the perimeter and area of a square

// Include the standard input/output library (stdio.h) to use input/output functions like printf and scanf
#include<stdio.h>

int main() 
{
    // Declare four integer variables: s for side, ps for perimeter, as for area
    int s, ps, as;

    // Prompt the user to enter the side of the square
    printf ("Enter the side of the square: ");
    // Read the input value from the user and store it in the s variable
    scanf ("%d",&s);

    // Calculate the perimeter of the square (4 times the side)
    ps = 4*s;
    // Calculate the area of the square (side squared)
    as = s*s;

    // Display the calculated perimeter and area of the square
    printf ("Perimeter of square = %d\n",ps);
    printf ("Area of square = %d\n",as);

    // Return 0 to indicate successful execution of the program
    return 0;
}