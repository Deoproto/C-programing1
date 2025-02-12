#include <stdio.h>

#define DEBUGWANE(var) printf("DEBUGWANE: %s = %d, %s:%d\n", #var, var, __FILE__, __LINE__)

int main() {
    int x = 42;
    DEBUGWANE(x);
    return 0;
}

