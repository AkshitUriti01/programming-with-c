#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter length of sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b == c) {
        printf("Equilateral triangle");
    } else if(a!=b && b!=c) {
        printf("Scalene triangle");
    } else {
        printf("Isocles Triangle");
    }

    return 0;
}