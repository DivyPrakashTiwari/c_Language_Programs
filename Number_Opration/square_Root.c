#include<stdio.h>

// Function to calculate the square root of a number
int sq(int num)
{
  int sqroot, i, pro; // Initialize variables to store square root, loop counter, and product
  
  // Iterate from 0 to the input number to find the square root
  for (i = 0; i <= num; i++)
  {
    pro = i * i; // Calculate the square of the current number
    if (pro == num) // Check if the square of the current number matches the input number
    {
      sqroot = i; // If it matches, store the current number as the square root
      break; // Exit the loop
    }
  }
  
  return sqroot; // Return the calculated square root
}

int main()
{
  int n, sqr; // Initialize variables to store the input number and its square root
  
  // Prompt the user to enter a number
  printf("enter the number who's square root to be calculated\n");
  
  // Read the input number from the user
  scanf("%d", &n);
  
  // Calculate the square root of the input number using the sq function
  sqr = sq(n);
  
  // Print the result
  printf("the square root of number %d is %d ", n, sqr);
  
  return 0; // Indicate successful execution
}