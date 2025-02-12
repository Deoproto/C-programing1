#include "safeint.h"
#include <limits.h>
#include <stdlib.h>

SafeResult safeadd(int a, int b) {
    SafeResult result = {0, 0};
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorflag = 1;
    } else {
        result.value = a + b;
    }
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result = {0, 0};
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        result.errorflag = 1;
    } else {
        result.value = a - b;
    }
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result = {0, 0};
    if (a > 0 && b > 0 && a > INT_MAX / b) {
        result.errorflag = 1;
    } else if (a < 0 && b < 0 && a < INT_MAX / b) {
        result.errorflag = 1;
    } else if (a > 0 && b < 0 && b < INT_MIN / a) {
        result.errorflag = 1;
    } else if (a < 0 && b > 0 && a < INT_MIN / b) {
        result.errorflag = 1;
    } else {
        result.value = a * b;
    }
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result = {0, 0};
    if (b == 0 || (a == INT_MIN && b == -1)) {
        result.errorflag = 1;
    } else {
        result.value = a / b;
    }
    return result;
}

