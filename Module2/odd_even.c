#include <stdio.h>
static void type(int a) {
    if (a%2==0) {
        printf("even");
    } else if (a%2==1) {
        printf("odd");
    }
}

int main(void) {
    type(100);
}