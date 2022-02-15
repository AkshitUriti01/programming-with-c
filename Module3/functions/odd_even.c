#include <stdio.h>
void even(int a) {
    printf("Even numbers: ");
    for (int i = 1; i<=a; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

void odd(int a) {
    printf("Odd numbers: ");
    for (int i=1; i<=a; i++) {
        if (i%2 == 1) {
            printf("Odd numbers: %d ", i);
        }
    }
}

int main() {
    even(100);

    return 0;
}