#include <stdio.h>
int swapp(int a, int b) {

    int temp = b;
    b = a;
    a = temp;

    return a,b;
}

int main(void) {
    printf("%d", swapp(10,20));
}