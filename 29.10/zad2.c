#include <stdio.h>

#define MAX(A, B) ((A) > (B) ? (A) : (B))

int main() {
    int a = 16, b = 84;
    printf("The greater number between %d and %d is %d\n", a, b, MAX(a, b));
    return 0;
}

