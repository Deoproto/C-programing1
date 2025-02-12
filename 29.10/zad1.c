#include <stdio.h>

#define SIZE 5
#define PRINTIRAJ(arr) \
    for(int i = 0; i < SIZE; i++) { \
        printf("%d ", arr[i]); \
    }

int main() {
    int arr[SIZE];
    arr[0] = 15;
    arr[1] = 58;
    arr[2] = 8;
    arr[3] = 69;
    arr[4] = 48;

    PRINTIRAJ(arr);

    return 0;
}
