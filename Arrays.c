/*
9. Arrays
Explanation: Arrays store multiple elements of the same data type in contiguous memory locations.

Types:

One-dimensional arrays

Two-dimensional arrays (matrices)

Multi-dimensional arrays

Syntax:
-------
data_type array_name[size];
data_type array_name[rows][columns];
Example:

*/
#include <stdio.h>

int main() {
    // One-dimensional array
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("One-dimensional array:\n");
    for(int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    // Two-dimensional array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("\nTwo-dimensional array (Matrix):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Array operations - find sum and average
    int scores[] = {85, 90, 78, 92, 88};
    int sum = 0;
    int size = sizeof(scores) / sizeof(scores[0]);
    
    for(int i = 0; i < size; i++) {
        sum += scores[i];
    }
    
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / size);
    
    return 0;
}
