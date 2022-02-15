#include <stdio.h>
int max(int a, int b, int c) {
    if (a>=b && b>=c) {
        return a;
    } else if (b>=c && c>=a) {
        return b;
    } else if (c>=a && a>=b) {
        return c;
    }

    return -1;
}

int main() {
    printf("The greatest number is %d", max(10,30,20));

    return 0;
}