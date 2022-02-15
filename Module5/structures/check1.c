#include <stdio.h>

// sum of factorial of digits
int main() {
    int num, sum = 0, fact = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        rem = num % 10;
        fact = 1;
        while (rem != 0) {
            fact = fact * rem;
            rem--;
        }
        sum = sum + fact;
        num = num / 10;
    }
    printf("Sum of factorial of digits: %d", sum);
    return 0;
}

