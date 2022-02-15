// product of two numbers using recursion

#include <stdio.h>
int product(int a, int b) {
    if (a < b) {
        return product(b,a);
    } else if (b != 0) {
        return (a + product(a,b-1));
    } else {
        return 0;
    }
}

int main (void) {
    int i,j;
    scanf("%d %d", &i, &j);
    printf("%d\n", product(i,j));
}