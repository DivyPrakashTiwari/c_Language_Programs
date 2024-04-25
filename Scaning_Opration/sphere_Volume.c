// Include the standard input/output library in C
#include <stdio.h>

// Define the main function where the program starts executing
int main()
{
    // Define a variable 'r' to store the radius of the sphere
    float r;

    // Define a variable 'vol' to store the volume of the sphere
    float vol;

    // Define a variable 'pie' to store the value of pi
    float pie = 3.14;

    // Print a message to the user to enter the value of the radius
    printf("Enter the value of radius: ");

    // Read the value of the radius from the user
    scanf("%f", &r);

    // Calculate the volume of the sphere using the formula 4/3 * pi * r^3
    vol = 1.3 * pie * r * r * r;

    // Print the volume of the sphere
    printf("Volume of sphere = %f\n", vol);

    // Return 0 to indicate that the program has executed successfully
    return 0;
}