#include <stdio.h>

int factorial(int num) {
    int fact=1;
    for (int i=1; i<=num; i++) {
        fact *= i;
    }
    return fact;
}

void strong(int num) {
    int last_num, fact, sum=0, temp=num;

    while (num!=0) {
        last_num = num%10;
        fact = factorial(last_num);
        sum = sum + fact;
        num = num/10;
    }

    if (sum == temp) {
        printf("Strong number");
    } else {
        printf("Not a strong number");
    }
}

int main(void) {
    strong(145);
}