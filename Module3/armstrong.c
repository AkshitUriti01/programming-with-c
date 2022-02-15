#include <stdio.h>

int power(int base, int exp) {
    int r=1;
    while (exp != 0) {
        r *= base;
        --exp;
    }
    return r;
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

    if (sum == temp) {
        printf("%d is armstrong number.\n", temp);
    } else {
        printf("%d is not an armstrong number.", temp);
    }
}

int main(void) {
    armstrong(153);
}
