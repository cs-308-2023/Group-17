#include "functions.h"
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdRec(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdRec(b, a % b);
    }
}