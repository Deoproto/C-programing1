#include <stdio.h>

#define SIZE 5

int main() {
    #if defined(SIZE) && SIZE > 0 && SIZE <= 10
        int arr[SIZE];
        int value = 1;
        
        for (int i = 0; i < SIZE; i++) {
            arr[i] = value;
            value *= 2;
        }

        for (int i = 0; i < SIZE; i++) {
            printf("Element %d: %d\n", i, arr[i]);
        }
    #else
        printf("Size is not in the given range.\n");
    #endif

    return 0;
}
