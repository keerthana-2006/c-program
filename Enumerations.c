/*
Enumerations
Explanation: Enums define a set of named integer constants, making code more readable.

Syntax:
-------
enum enum_name {
    constant1,
    constant2,
    constant3 = value  // Custom value
};
Example:
--------
*/
#include <stdio.h>

// Basic enum
enum Weekday {
    MONDAY,     // 0
    TUESDAY,    // 1
    WEDNESDAY,  // 2
    THURSDAY,   // 3
    FRIDAY,     // 4
    SATURDAY,   // 5
    SUNDAY      // 6
};

// Enum with custom values
enum Status {
    SUCCESS = 1,
    FAILURE = 0,
    PENDING = -1
};

// Enum for months
enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

// Using enum in switch
enum Operation {
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/'
};

int main() {
    // Basic enum usage
    enum Weekday today = WEDNESDAY;
    
    printf("WEDNESDAY value: %d\n", today);
    
    if(today == WEDNESDAY) {
        printf("It's Wednesday!\n");
    }
    
    // Loop through enum
    printf("\nWeekdays:\n");
    for(int day = MONDAY; day <= SUNDAY; day++) {
        switch(day) {
            case MONDAY: printf("Monday\n"); break;
            case TUESDAY: printf("Tuesday\n"); break;
            case WEDNESDAY: printf("Wednesday\n"); break;
            case THURSDAY: printf("Thursday\n"); break;
            case FRIDAY: printf("Friday\n"); break;
            case SATURDAY: printf("Saturday\n"); break;
            case SUNDAY: printf("Sunday\n"); break;
        }
    }
    
    // Status enum
    enum Status result = SUCCESS;
    if(result == SUCCESS) {
        printf("\nOperation successful!\n");
    }
    
    // Month enum
    enum Month current = MAY;
    printf("Current month number: %d\n", current);
    
    // Using enum in calculations
    enum Operation op = ADD;
    int a = 10, b = 5;
    int result_value;
    
    switch(op) {
        case ADD:
            result_value = a + b;
            printf("\n%d + %d = %d\n", a, b, result_value);
            break;
        case SUBTRACT:
            result_value = a - b;
            printf("%d - %d = %d\n", a, b, result_value);
            break;
        default:
            printf("Invalid operation\n");
    }
    
    return 0;
}
