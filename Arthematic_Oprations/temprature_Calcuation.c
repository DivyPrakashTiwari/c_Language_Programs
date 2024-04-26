#include <stdio.h> // This line includes the standard input/output library in C, which allows the program to read input from the user and print output to the console.

int main() // This is the main function where the program starts executing. The main function must return an integer value, which is why it is declared as int main().
{
  float far, cel; // This line declares two floating-point variables, far and cel, which will be used to store the temperature in Fahrenheit and Celsius, respectively.

  printf("enter the temperature in farhenhite\n"); // This line prompts the user to enter the temperature in Fahrenheit.
  scanf("%f", &far); // This line reads the input from the user and stores it in the far variable.

  cel = (far - 32) * 0.519; // This line converts the temperature from Fahrenheit to Celsius using the formula (far - 32) * 0.519.
  printf("the temperature in celcius %f\n", cel); // This line prints the converted temperature in Celsius.

  return 0; // Finally, the main function returns 0 to indicate that it has finished executing successfully.
}