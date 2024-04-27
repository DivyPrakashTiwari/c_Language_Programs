// Include the standard input/output library
#include<stdio.h>

// Define the main function
int main()
{
    // Declare an integer variable 'y' to store the year entered by the user
    int y;

    // Declare a float variable 'x' which is not used in the program
    float x;

    // Prompt the user to enter a year
    printf ("Enter the year\n");

    // Read the input from the user and store it in the variable 'y'
    scanf ("%d",&y);

    if((y%400==0) || (y%4==0 && y%100!=0))    {
        // If the remainder is 0, print "The given year is a Leap Year"
        printf("The given year is a Leap Year");
    }
    else 
    {
        // If the remainder is not 0, print "The given year is not a Leap Year"
        printf("The given year is not a Leap Year");
    }

    // Return 0 from the main function to indicate successful execution
    return 0;
}