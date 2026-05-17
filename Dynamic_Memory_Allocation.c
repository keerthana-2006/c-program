13. Dynamic Memory Allocation
Explanation: Dynamic memory allocation allows memory to be allocated at runtime from the heap.

Functions:

malloc() - allocates memory

calloc() - allocates and initializes to zero

realloc() - resizes allocated memory

free() - deallocates memory

Syntax:

c
#include <stdlib.h>
ptr = (cast_type*) malloc(size);
ptr = (cast_type*) calloc(num_elements, element_size);
ptr = (cast_type*) realloc(ptr, new_size);
free(ptr);
Example:

c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    // malloc example
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int *arr = (int*) malloc(n * sizeof(int));
    
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Using allocated memory
    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    printf("Array using malloc: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // calloc example
    int *arr2 = (int*) calloc(n, sizeof(int));
    
    if(arr2 == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }
    
    printf("Array using calloc (initialized to zero): ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    // realloc example
    int new_n = n * 2;
    arr = (int*) realloc(arr, new_n * sizeof(int));
    
    if(arr == NULL) {
        printf("Memory reallocation failed!\n");
        free(arr);
        free(arr2);
        return 1;
    }
    
    for(int i = n; i < new_n; i++) {
        arr[i] = (i + 1) * 10;
    }
    
    printf("Array after realloc: ");
    for(int i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(arr);
    free(arr2);
    
    return 0;
}
