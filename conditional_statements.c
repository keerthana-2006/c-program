/*
7. Control Flow (Conditional Statements)
Explanation: Control flow statements allow decision-making in programs.


Types:

1.if statement
2.if-else statement
3.else if ladder
4.switch statement

Syntax:
--------
c
if (condition) {
    // code
} else if (condition) {
    // code
} else {
    // code
}

switch(expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
*/

#include <stdio.h>

int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    
    // if-else if ladder
    if (score >= 90) {
        printf("Grade A\n");
    } else if (score >= 80) {
        printf("Grade B\n");
    } else if (score >= 70) {
        printf("Grade C\n");
    } else if (score >= 60) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }
    
    // switch statement
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day\n");
    }
    
    return 0;
}
