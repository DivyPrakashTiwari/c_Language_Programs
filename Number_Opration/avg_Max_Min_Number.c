#include <stdio.h>

// Function declaration for the average calculation function
int avrg(int arr[]);

// Function declaration for the difference calculation function
int differ(int arr[]);

int main()
{
    // Initialize variables for average and difference
    int avg, df;

    // Initialize an array of integers
    int ar[] = {150, 250, 340, 180, 220, 270};

    // Calculate the average of the numbers in the array
    avg = avrg(ar);

    // Calculate the difference between the maximum and minimum numbers in the array
    df = differ(ar);

    // Print the average and difference
    printf("The average of the numbers is: %d\n", avg);
    printf("The difference between the maximum and minimum numbers is: %d\n", df);

    return 0;
}

// Function to calculate the average of an array of integers
/*
 * Parameters:
 * arr - an array of integers
 * 
 * Returns:
 * the average of the integers in the array
 */
int avrg(int arr[])
{
    // Initialize variables for the sum and average
    int sum, i;
    float avreg;

    // Initialize the sum to 0
    sum = 0;

    // Calculate the sum of the integers in the array
    for (i = 0; i < 6; i++)
    {
        sum = sum + arr[i];
    }

    // Calculate the average
    avreg = sum / 6;

    // Return the average
    return avreg;
}

// Function to calculate the difference between the maximum and minimum numbers in an array of integers
/*
 * Parameters:
 * arr - an array of integers
 * 
 * Returns:
 * the difference between the maximum and minimum numbers in the array
 */
int differ(int arr[])
{
    // Initialize variables for the maximum, minimum, and difference
    int max, min, dif, i;

    // Initialize the maximum and minimum to the first element of the array
    max = 0;
    min = 0;

    // Find the maximum and minimum numbers in the array
    for (i = 5; i >= 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Calculate the difference between the maximum and minimum numbers
    dif = max - min;

    // Return the difference
    return dif;
}