// calculating simple interest
#include <stdio.h>

int main() {
    float p,t,r;
    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter time in year: ");
    scanf("%f", &t);

    printf("Enter ROI: ");
    scanf("%f", &r);

    float si = (p*t*r)/100;
    printf("Simple Interest is %.2f", si);

    return 0;
}
