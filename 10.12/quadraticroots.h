#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

#include <stdbool.h> 

typedef struct {
    long double x1;
    long double x2;
    bool norealroots;
} QuadraticRootsResult;

QuadraticRootsResult findroots(long double a, long double b, long double c);

#endif


