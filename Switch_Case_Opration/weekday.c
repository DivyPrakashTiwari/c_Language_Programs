#include <stdio.h>

// Function: main()
// Description: The main function where the program starts executing
int main()
{
    // Declare an integer variable 'n' to store the weekday number
    int n;

    printf("WELCOME TO WEEKDAYS");
    // Prompt the user to enter the weekday number
    printf("Enter the weekday number: ");

    // Read the weekday number from the user input
    scanf("%d", &n);

    // Use a switch statement to check the value of 'n' and print the corresponding weekday
    switch(n)
    {
        // Case 1: Sunday
        case 1:
        {
            // Print "It's Sunday"
            printf("It's Sunday\n");
            break;
        }

        // Case 2: Monday
        case 2:
        {
            // Print "It's Monday"
            printf("It's Monday\n");
            break;
        }

        // Case 3: Tuesday
        case 3:
        {
            // Print "It's Tuesday"
            printf("It's Tuesday\n");
            break;
        }

        // Case 4: Wednesday
        case 4:
        {
            // Print "It's Wednesday"
            printf("It's Wednesday\n");
            break;
        }

        // Case 5: Thursday
        case 5:
        {
            // Print "It's Thursday"
            printf("It's Thursday\n");
            break;
        }

        // Case 6: Friday
        case 6:
        {
            // Print "It's Friday"
            printf("It's Friday\n");
            break;
        }

        // Case 7: Saturday
        case 7:
        {
            // Print "It's Saturday"
            printf("It's Saturday\n");
            break;
        }

        // Default case: Invalid input
        default:
        {
            // Print "Invalid choice"
            printf("Invalid choice\n");
            break;
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
