#include <stdio.h>

#define SWAP(A, B, TYPE)\
do { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
} while(0)

int main() {
    int x = 18, y = 42;
    printf("Predi: x = %d, y = %d\n", x, y);
    SWAP(x, y, int);
    printf("Sled: x = %d, y = %d\n", x, y);
    return 0;
}

