#include <stdio.h>

void sumOfFactorialOfDigits(int num) {
    int sum = 0, fact = 1, rem;
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
    
    printf("%d", sum);
}

int main() {
    
    

    return 0;
}

