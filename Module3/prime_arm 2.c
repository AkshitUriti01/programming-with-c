// armstrong part is incorrect

#include <stdio.h>

void prime(int num) {
    // checking prime or not
    if (num%2 == 1) {
        printf("%d is prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}

void perfect(int num) {
    int last_num, temp=num, sum=0; 
    // checking perfect or not
    while (num != 0) {
        last_num = num % 10;
        sum += last_num;
        num = num/10;
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", temp);
    } else {
        printf("%d is not a perfect number.\n", temp);
    }
}

int power(int base, int exp) {
    int r=1;
    while (exp != 0) {
        r *= base;
        --exp;
    }
}

void armstrong(int num) {
    int count=0,result=1,temp=num,digit,sum=0;
    // finding number of digits
    do {
        num = num/10;
        ++count;
    } while (num!=0); // from this we got the no of digits in the number => count

    // here no if digits is the exponent i.e count is the exponent
    while (count != 0) {
        digit = num%10;
        result = power(digit, count);
        sum = sum + result;
        num /= 10;
        --count;
    }

    

    if (result == temp) {
        printf("%d is armstrong number.\n", temp);
    } else {
        printf("%d is not an armstrong number.", temp);
    }
}

void check_all(int a) {
    prime(a);
    perfect(a);
    armstrong(a);
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    check_all(n);
}