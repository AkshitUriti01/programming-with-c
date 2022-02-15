#include <stdio.h>

void sum(int a, int b, int c) {
    printf("The sum is %d\n", a+b+c);
}

void sub(int a, int b, int c) {
    printf("The difference is %d\n", a-b-c);
}

void product(int a, int b, int c) {
    printf("The product is %d", a*b*c);
}

int main() {
    int i,j,k;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &i, &j, &k);

    sum(i, j, k);
    sub(i,j,k);
    product(i,j,k);

    return 0;

}