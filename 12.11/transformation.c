#include "transformation.h"

transformation string_to_int(const char *str) {
    transformation result;
    result.result = 0;
    result.error[0] = '\0';

    int sign = 1;
    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            result.result = result.result * 10 + (*str - '0');
            str++;
        } else {
            strcpy(result.error, "Invalid input string");
            return result;
        }
    }

    result.result *= sign;
    return result;
}

