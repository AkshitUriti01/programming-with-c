// finding the power of a number
#include <stdio.h>

int power(int a, int b) {
    int r=1;
    while (b!=0) {
        r *= a;
        --b;
    }
    return r;
} 

int main(void) {
    printf("%d", power(10, 2));
}