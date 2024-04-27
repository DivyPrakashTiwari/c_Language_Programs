// Include the standard input/output library
#include <stdio.h>

// Define the main function, which is the entry point of the program
int main() {
  // Declare an integer variable 'mark' to store the user's input
  int mark;

  // Prompt the user to enter the value of marks
  printf("Enter the value of marks\n");

  // Read the user's input using the scanf() function
  scanf("%d", &mark);

  // Use a series of if and else if statements to check the value of 'mark'
  // and determine the corresponding grade
  if (mark >= 80) {
    // If 'mark' is greater than or equal to 80, print "The grade is A+"
    printf("The grade is A+\n");
  } else if (mark < 80 && mark >= 70) {
    // If 'mark' is less than 80 but greater than or equal to 70, print "The grade is B"
    printf("The grade is B\n");
  } else if (mark < 70 && mark >= 60) {
    // If 'mark' is less than 70 but greater than or equal to 60, print "The grade is C"
    printf("The grade is C\n");
  } else if (mark < 60 && mark >= 40) {
    // If 'mark' is less than 60 but greater than or equal to 40, print "The grade is D"
    printf("The grade is D\n");
  } else {
    // If 'mark' is less than 40, print "The grade is F"
    printf("The grade is F\n");
  }

  // Return 0 to indicate that the program has finished executing successfully
  return 0;
}