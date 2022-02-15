#include <stdio.h>

int main() {
    // F = (C*1.8)+32
    // C = (F-32)/1.8

    float f,c;
    printf("Enter temperature in celcius: ");
    scanf("%f", &c);

    f = (c*1.8)+32;
    printf("Temperature in farenheit = %.2f", f);

    return 0;
}