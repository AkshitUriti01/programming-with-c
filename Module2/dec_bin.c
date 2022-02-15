#include <stdio.h>
int main() {
    long bin_num=0;
    int dec_num, rem, f=1;

    printf("Enter a decimal number: ");
    scanf("%d", &dec_num);

    while (dec_num != 0) {
        rem = dec_num % 2;
        bin_num = bin_num + rem * f;
        f = f * 10;
        dec_num = dec_num / 2;
    }

    printf("The binary number is %ld", bin_num);

    return 0;
}