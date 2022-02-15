// check whether a number is prime, armstrong number or perfect number
#include <stdio.h>

void prime(int n) {
    // return 0 if number is not prime and 1 if number is prime
    int i, flag = 1;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

}

void perfect(int n) {
    // find the divisors of a number and add them up
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }
}
    