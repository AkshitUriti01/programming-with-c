// swapping 3 variables
#include <stdio.h>

int main() {
    int a=10;
    int b=20;
    int c=30;

    int temp=a;
    a=b; //a=20
    b=c; //b=30
    c=temp; //c=10

    printf("\nThe value of a is %d", a);
    printf("\nThe value of b is %d", b);
    printf("\nThe value of c is %d", c);

    return 0;
}