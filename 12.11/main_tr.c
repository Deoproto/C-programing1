#include <stdio.h>
#include "transformation.h"

int main() {
    char str1[] = "-123";
    char str2[] = "12ab23";

    transformation tmp1 = string_to_int(str1);
    transformation tmp2 = string_to_int(str2);

    printf("Вход: %s => Изход: tmp.result = %ld, tmp.error = %s\n", str1, tmp1.result, tmp1.error);
    printf("Вход: %s => Изход: tmp.result = %ld, tmp.error = %s\n", str2, tmp2.result, tmp2.error);

    return 0;
}

