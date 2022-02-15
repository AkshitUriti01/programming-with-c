#include <stdio.h>

static int max(int a, int b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    printf("%d\n", max(10, 20));
}