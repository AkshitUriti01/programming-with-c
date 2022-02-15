#include <stdio.h>

int max(int a, int b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    int i,j;
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);

    printf("%d\n", max(i,j));
}
