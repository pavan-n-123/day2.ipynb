#include <stdio.h>
#include <stdlib.h> 

int main() {
    int* intArray;
    int numElements;

    printf("Enter the number of integers to allocate: ");
    scanf("%d", &numElements);

    
    intArray = (int*)malloc(numElements * sizeof(int));

    
    if (intArray == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1; 
    }

    
    for (int i = 0; i < numElements; i++) {
        intArray[i] = i + 1;
        printf("%d ", intArray[i]);
    }
    printf("\n");

    
    free(intArray);
    intArray = NULL; 

    return 0;
}
