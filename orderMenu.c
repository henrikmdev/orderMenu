#include <stdio.h>

// Function to display the menu
void showMenu() {
    // Display the menu options
    printf("\nMenu:\n");
    printf("1. Pizza - $9.99\n");
    printf("2. Cheeseburger - $4.99\n");
    printf("3. Hotdog - $2.99\n");
    printf("0. Exit (Finish ordering)\n");
}

int main() {
    // Declare and initialize variables of different data types
    int myInt = 42;        // Variable to track the user's menu selection
    double myDouble = 0.00; // Variable to track the total bill
    char myString[50];     // Array to hold the user's name
    char dummy;

    // Ask the user for their name
    printf("Please enter your name: ");
    scanf("%s", myString);
    printf("Hello, %s!\n", myString);

    // While the user has not chosen to exit (myInt != 0)
    while (myInt != 0) {
        // Call the function to display the menu
        showMenu();

        // Ask for the user's food choice by number
        printf("Please enter the number corresponding to your food choice (1, 2, or 3): ");
        scanf("%d", &myInt);

        // Process the order based on the user's choice
        if (myInt == 1) {
            myDouble = myDouble + 9.99;
            printf("You ordered a pizza. Your bill so far is $%.2f\n", myDouble);
        } else if (myInt == 2) {
            myDouble = myDouble + 4.99;
            printf("You ordered a cheeseburger. Your bill so far is $%.2f\n", myDouble);
        } else if (myInt == 3) {
            myDouble = myDouble + 2.99;
            printf("You ordered a hotdog. Your bill so far is $%.2f\n", myDouble);
        } else if (myInt != 0) {
            printf("You didn't give a valid selection...\n");
        }

        // Ask user to acknowledge before continuing
        printf("\nPress Enter to continue...");
        scanf("%c", &dummy); // Consume leftover newline
        getchar(); // Wait for Enter
    }

    // Print the final bill
    printf("%s, Your final bill is $%.2f.\n", myString, myDouble);

    return 0;
}