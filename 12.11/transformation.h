#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <stdio.h>
#include <string.h>

typedef struct {
    long result;
    char error[100];
} transformation;

transformation string_to_int(const char *str);

#endif
