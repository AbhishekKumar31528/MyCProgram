#include <stdio.h>

// Function to check if a given year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    // Array to store the number of days in each month (non-leap year)
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int month, year, totalDays = 0;

    // Prompt user to enter month and year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);

    // Check if the entered month is valid
    if (month < 1 || month > 12) {
        printf("Invalid month.\n");
        return 1;
    }

    // Check if the entered year is a leap year
    if (isLeapYear(year)) {
        daysInMonth[2] = 29; // Update February days for a leap year
    }

    // Calculate the total number of days up to the given month
    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth[i];
    }

    // Print the total number of days
    printf("Number of days in the year up to month %d: %d\n", month, totalDays);

    return 0;
}
