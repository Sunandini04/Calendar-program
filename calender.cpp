#include <stdio.h>

#define YES 1
#define NO 0

int month_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char *month_names[] = {
    " ",
    "\n\n\nJanuary",
    "\n\n\nFebruary",
    "\n\n\nMarch",
    "\n\n\nApril",
    "\n\n\nMay",
    "\n\n\nJune",
    "\n\n\nJuly",
    "\n\n\nAugust",
    "\n\n\nSeptember",
    "\n\n\nOctober",
    "\n\n\nNovember",
    "\n\n\nDecember"
};

// Function to prompt user for the year
int get_year() {
    int yr;
    printf("Enter the year : ");
    scanf("%d", &yr);
    return yr;
}

// Function to compute the day code for the first day of the year
int compute_day_code(int yr) {
    int day_code;
    int a, b, c;
    
    a = (yr - 1) / 4;
    b = (yr - 1) / 100;
    c = (yr - 1) / 400;
    day_code = (yr + a - b + c) % 7;
    return day_code;
}

// Function to check if a year is a leap year and adjust February days
int is_leap_year(int yr) {
    if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0) {
        month_days[2] = 29;
        return YES;
    } else {
        month_days[2] = 28;
        return NO;
    }
}

// Function to print the calendar for the year
void print_calendar(int yr, int day_code) {
    int mo, day;
    for (mo = 1; mo <= 12; mo++) {
        printf("%s", month_names[mo]);
        printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        // Adjust the position for the first date of the month
        for (day = 1; day <= 1 + day_code * 5; day++) {
            printf(" ");
        }

        // Print all the days in the current month
        for (day = 1; day <= month_days[mo]; day++) {
            printf("%2d", day);

            // Move to the next line after Saturday
            if ((day + day_code) % 7 > 0) {
                printf("   ");
            } else {
                printf("\n ");
            }
        }
        // Update the day code for the next month
        day_code = (day_code + month_days[mo]) % 7;
    }
}

int main(void) {
    int yr, day_code;
    
    yr = get_year();
    day_code = compute_day_code(yr);
    is_leap_year(yr);
    print_calendar(yr, day_code);
    printf("\n");

    return 0;
}

