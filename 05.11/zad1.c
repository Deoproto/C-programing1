#include <stdio.h>

#define SIZE 7
#define DEBUG

void Sort_Sum(int *arr) {
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
        }
    }

    #ifdef DEBUG
        printf("Sortiran masiv: ");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nElementi koito se delqt na tri: ");
        for (int i = 0; i < SIZE; i++) {
            if (i % 3 == 0) {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    #endif

    printf("Sum na elementi koito se delqt na tri: %d\n", sum);
}

int main() {
    int arr[SIZE] = {12, 3, 7, 15, 6, 9, 10};
    Sort_Sum(arr);
    return 0;
}
