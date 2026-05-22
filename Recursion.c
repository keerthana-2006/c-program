/*
Recursion
Explanation: Recursion occurs when a function calls itself. It requires a base case to terminate.
*/
/*Syntax:
return_type function_name(parameters) {
    if(base_condition) {
        return base_value;
    }
    return function_name(modified_parameters);
}
*/
//Example:
#include <stdio.h>

// Factorial using recursion
int factorial(int n) {
    if(n <= 1) return 1;  // Base case
    return n * factorial(n - 1);  // Recursive case
}

// Fibonacci sequence using recursion
int fibonacci(int n) {
    if(n <= 1) return n;  // Base case
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

// Sum of array using recursion
int arraySum(int arr[], int n) {
    if(n <= 0) return 0;  // Base case
    return arr[n - 1] + arraySum(arr, n - 1);  // Recursive case
}

// Greatest Common Divisor (GCD) using Euclid's algorithm
int gcd(int a, int b) {
    if(b == 0) return a;  // Base case
    return gcd(b, a % b);  // Recursive case
}

// Tower of Hanoi
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if(n == 1) {
        printf("Move disk 1 from %c to %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from %c to %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Tail recursion example (optimizable)
void printNumbers(int n) {
    if(n == 0) return;
    printf("%d ", n);
    printNumbers(n - 1);
}

int main() {
    // Factorial
    int num = 5;
    printf("Factorial of %d: %d\n", num, factorial(num));
    
    // Fibonacci
    printf("Fibonacci sequence (first 10 terms): ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    // Array sum
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of array: %d\n", arraySum(arr, size));
    
    // GCD
    int a = 48, b = 18;
    printf("GCD of %d and %d: %d\n", a, b, gcd(a, b));
    
    // Tower of Hanoi
    printf("\nTower of Hanoi with 3 disks:\n");
    towerOfHanoi(3, 'A', 'C', 'B');
    
    // Tail recursion
    printf("\nPrint numbers using recursion: ");
    printNumbers(5);
    printf("\n");
    
    return 0;
}
