#include <iostream>
#include "gcd_iterative.h"

unsigned long long gcd_iterative(unsigned long long a, unsigned long long b) {
    while (a != b) {
        if (a > b) {
            unsigned long long tmp = a;
            a = b;
            b = tmp;
        }
        b = b - a;
    }
    return a;
}