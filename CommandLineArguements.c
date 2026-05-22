/*
Command Line Arguments
Explanation: Command line arguments allow passing information to a program when it starts.

Syntax:

int main(int argc, char *argv[]) {
    // argc: argument count
    // argv: argument vector (array of strings)
}
*/
//Example:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc);
    
    // Display all arguments
    printf("\nAll command line arguments:\n");
    for(int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    // Check if arguments are provided
    if(argc < 2) {
        printf("\nUsage: %s <name> [age] [score]\n", argv[0]);
        return 1;
    }
    
    // Process specific arguments
    printf("\nProcessing arguments:\n");
    printf("Hello, %s!\n", argv[1]);
    
    if(argc >= 3) {
        int age = atoi(argv[2]);  // Convert string to int
        printf("Age: %d\n", age);
    }
    
    if(argc >= 4) {
        float score = atof(argv[3]);  // Convert string to float
        printf("Score: %.2f\n", score);
    }
    
    // Sum of numbers passed as arguments
    if(argc > 2) {
        int sum = 0;
        printf("\nSum of numeric arguments: ");
        for(int i = 1; i < argc; i++) {
            int num = atoi(argv[i]);
            sum += num;
            printf("%d ", num);
            if(i < argc - 1) printf("+ ");
        }
        printf("= %d\n", sum);
    }
    
    // Calculator example
    if(argc == 4) {
        char operator = argv[2][0];  // Get the operator character
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[3]);
        int result;
        
        printf("\nCalculator:\n");
        switch(operator) {
            case '+':
                result = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%d - %d = %d\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%d * %d = %d\n", num1, num2, result);
                break;
            case '/':
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("%d / %d = %d\n", num1, num2, result);
                } else {
                    printf("Division by zero!\n");
                }
                break;
            default:
                printf("Invalid operator! Use +, -, *, /\n");
        }
    }
    
    return 0;
}
