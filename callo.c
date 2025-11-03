#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    
    arr = (int *)calloc(n, sizeof(int));

    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    printf("Memory allocated successfully. Initial values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

    
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Values after assignment:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);
    arr = NULL; 

    return 0;
}
