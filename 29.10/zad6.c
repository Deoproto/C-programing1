#include <stdio.h>

#define SWAP(A, B, TYPE) do { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
} while(0)

#define SORTIRANE(ARR, SIZE, TYPE, COMPARE)\
do { \
    for(int i = 0; i < SIZE - 1; i++) { \
        for(int j = 0; j < SIZE - i - 1; j++) { \
            if (ARR[j] COMPARE ARR[j + 1]) { \
                SWAP(ARR[j], ARR[j + 1], TYPE); \
            } \
        } \
    } \
} while(0)

int main() {
    int arr[5] = {5, 3, 2, 8, 1};
    SORTIRANE(arr, 5, int, <);
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
