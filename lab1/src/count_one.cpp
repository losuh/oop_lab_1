#include "count_one.h"

int counter(int a, int b) {
    int c = 0;
    for (int i = a; i <= b; i++) {
        int m = i;
        while (m > 0) {
            c += m % 2;
            m /= 2;
        }
    }
    return c;
}