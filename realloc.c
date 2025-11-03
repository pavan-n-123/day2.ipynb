#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int initial_size = 3;
    int new_size = 5;

    
    arr = (int*) malloc(initial_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Initial array elements:\n");
    for (int i = 0; i < initial_size; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    arr = (int*) realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Array elements after reallocation and adding new values:\n");
    for (int i = 0; i < new_size; i++) {
        if (i >= initial_size) { 
            arr[i] = i + 1;
        }
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);

    return 0;
}
