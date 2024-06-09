# Calendar Program

## Overview

The Calendar Program is a simple C application that generates and displays a calendar for a specified year. It accounts for leap years and correctly adjusts the number of days in February. This program is useful for visualizing the layout of months and days for any given year.

## Problem Definition

### Given:

- A year provided by the user.
- An array of days representing the number of days in each month.
- An array of month names for display purposes.

### Objective:

- Compute and display the calendar for the specified year.
- Adjust for leap years to ensure February has the correct number of days.

## Implementation

The implementation involves the following steps:

1. **User Input:** Prompt the user to enter a year.
2. **Day Code Calculation:** Compute the day code for the first day of the year.
3. **Leap Year Adjustment:** Check if the specified year is a leap year and adjust the days in February if necessary.
4. **Calendar Display:** Print the calendar for each month, correctly formatted, and display the days of the week.

## Input Format

The input consists of:

- **Year:** An integer representing the year for which the calendar is to be displayed.

Example:
```
Enter the year (e.g., 2024): 2024
```

## Output Format

The output will consist of:

- **Calendar Display:** A neatly formatted calendar for the entire year, showing the months, days of the week, and dates.

Example:
```
January

Sun  Mon  Tue  Wed  Thu  Fri  Sat
         1    2    3    4    5    6
7    8    9   10   11   12   13
14   15   16   17   18   19   20
21   22   23   24   25   26   27
28   29   30   31
```

