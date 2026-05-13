/*
8. Loops
Explanation: Loops execute a block of code repeatedly.

Types:

1.for loop - when number of iterations is known
2.while loop - when condition is checked before execution
3.do-while loop - when code must execute at least once

Syntax:
-------
for(initialization; condition; increment/decrement) {
    // code
}

while(condition) {
    // code
}

do {
    // code
} while(condition);
Example:

*/

#include <stdio.h>

int main() {
    // for loop
    printf("For loop: ");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // while loop
    printf("While loop: ");
    int j = 1;
    while(j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");
    
    // do-while loop
    printf("Do-while loop: ");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while(k <= 5);
    printf("\n");
    
    // Nested loops - multiplication table
    printf("\nMultiplication Table:\n");
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }
    
    // break and continue
    printf("\nUsing break and continue:\n");
    for(int i = 1; i <= 10; i++) {
        if(i == 5) continue;  // skip 5
        if(i == 8) break;     // stop at 8
        printf("%d ", i);
    }
    
    return 0;
}
