#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}

int main(void) {
    int b,e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);

    int ans = power(b,e);
    printf("%d", ans);
}
