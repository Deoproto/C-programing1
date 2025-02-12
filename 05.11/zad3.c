#include <stdio.h>

#define SIZE 6

void sortArray(int *arr) {
    #ifdef _WIN32
        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    #elif __linux__
        for (int i = 0; i < SIZE - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < SIZE; j++) {
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }
            int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }
    #elif __APPLE__
        for (int i = 1; i < SIZE; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    #else
        for (int i = 0; i < SIZE / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[SIZE - 1 - i];
            arr[SIZE - 1 - i] = temp;
        }
    #endif
     for (int i = 0; i < SIZE / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[SIZE - 1 - i];
            arr[SIZE - 1 - i] = temp;
        }
}

int main() {
    int arr[] = {20, 5, 8, 12, 15, 1};
    sortArray(arr);

    printf("Sorted/Reversed Array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}






