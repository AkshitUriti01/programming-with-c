#include <stdio.h>

static void odd(int a) {
    printf("Odd numbers in range:\n");
    for (int i=0; i<=a; i++) {
        if (i%2==1) {
            printf("%d\t", i);
        }
    }
}

static void even(int b) {
    printf("\nEven numbers in range:\n");
    for (int i=0; i<=b; i++) {
        if (i%2==0) {
            printf("%d\t", i);
        }
    }
}

int main(void) {
    int j;
    printf("Enter a number: ");
    scanf("%d", &j);

    odd(j);
    even(j);
}