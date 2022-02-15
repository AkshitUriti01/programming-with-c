// converting distance from one unit to another
#include <stdio.h>

int main() {
    // 1km = 1000m
    // 1m = 100cm

    float km,m;
    printf("Enter distance in km: ");
    scanf("%f", &km);

    m = km*1000;
    printf("In meteres=%.2f", m);

    return 0;
}