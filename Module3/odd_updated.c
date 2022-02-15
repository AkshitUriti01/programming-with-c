#include <stdio.h>

void odd_even(int range) {
    printf("\t\tOdd Numbers:\n");
    printf("Even Numbers:\n");

    for (int i=1; i<=range; i++) {
        if (i%2 == 0) {
            printf("\t%d\n", i);
        } else if (i%2 == 1) {
            printf("\t\t%d\n", i);
        }
    }
}

int main(void) {
    odd_even(10);
}
