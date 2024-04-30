#include <stdio.h>

int main() {
    // Prompt user to enter the choice for the month
    printf("WELCOME TO CALENDAR\n");
    printf("Enter the choice for the month (1-12): ");
    int n;
    scanf("%d", &n);

    // Switch statement to handle user input and print the number of days in the selected month
    switch (n) {
        case 1:
            // January has 31 days
            printf("Number of days are 31\n");
            break;
        case 2:
            // February has 28 days
            printf("Number of days are 28\n");
            break;
        case 3:
            // March has 31 days
            printf("Number of days are 31\n");
            break;
        case 4:
            // April has 30 days
            printf("Number of days are 30\n");
            break;
        case 5:
            // May has 31 days
            printf("Number of days are 31\n");
            break;
        case 6:
            // June has 30 days
            printf("Number of days are 30\n");
            break;
        case 7:
            // July has 31 days
            printf("Number of days are 31\n");
            break;
        case 8:
            // August has 31 days
            printf("Number of days are 31\n");
            break;
        case 9:
            // September has 30 days
            printf("Number of days are 30\n");
            break;
        case 10:
            // October has 31 days
            printf("Number of days are 31\n");
            break;
        case 11:
            // November has 30 days
            printf("Number of days are 30\n");
            break;
        case 12:
            // December has 31 days
            printf("Number of days are 31\n");
            break;
        default:
            // Print error message if user input is not valid
            printf("Wrong choice. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
