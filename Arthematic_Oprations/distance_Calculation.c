#include <stdio.h> // This line includes the standard input/output library, which provides functions for reading input and displaying output.

int main() { // This is the entry point of the program.
  float n; // This declares a variable 'n' of type float to store the distance.

  // This displays a prompt to the user to enter the distance covered in meters using the printf() function.
  printf("Enter the distance covered in meters: ");

  // This reads the user input and stores it in the variable 'n' using the scanf() function.
  // The '&' symbol is used to get the address of the variable 'n' so that scanf() can store the input value at that address.
  scanf("%f", &n);

  // This converts the distance from meters to kilometers by dividing 'n' by 1000.
  // This is because 1 kilometer is equal to 1000 meters.
  n = n / 1000;

  // This displays the converted distance using the printf() function.
  // The '%f' format specifier is used to display the value of 'n' as a floating-point number.
  printf("The distance covered in kilometers: %f\n", n);

  return 0; // This indicates that the program has executed successfully.
}