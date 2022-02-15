#include <stdio.h>

int main() {
    printf("\ninput = 1 >>converting time - hours to minutes and seconds");
    printf("\ninput = 2 >>converting distance - km to m");
    printf("\ninput = 3 >>finding area of square");
    printf("\ninput = 4 >>finding volume of cuboid");
    printf("\ninput = 5 >>converting temperature - F to C and C to F ");

    int i;
    printf("\nEnter input: ");
    scanf("%i", &i);

    switch (i) {
        case 1:
            printf("\n--Converting Time--");
            //1hr = 60min
            //1min = 60sec

            float hr,m,s;
            printf("\nEnter time in hours: ");
            scanf("%f", &hr);

            printf("\n%.2f hour(s) in minutes: %.2f", hr, hr * 60);
            printf("\n%.2f hour(s) in seconds: %.2f", hr, hr * 60 * 60);
            break;

        case 2:
            printf("\n--Converting distance--");
            //1km = 1000m
            float km;
            printf("\nEnter distance in KM: ");
            scanf("%f", &km);
            printf("\nDistance in meter: %.2f", km*1000);

            break;
        case 3:
            printf("\n--Finding area of a square--");
            //area of square = side * side
            float side;
            printf("\nEnter length of side of square: ");
            scanf("%f", &side);
            printf("Area of square = %.2f", side * side);

            break;
        case 4:
            printf("\n--Finding volume of a cuboid--");
            float l,b,h;
            printf("Enter l, b, h: ");
            scanf("%f %f %f", &l, &b, &h);
            printf("Volume of cuboid =%.2f", l * b * h);

            break;
        case 5:
            printf("\n--Conversion of temperature--");
            // F = (C*1.8)+32
            // C = (F-32)/1.8
            float c;
            printf("Enter temperature in celcius: ");
            scanf("%f", &c);
            printf("Temperature in farenheit = %.2f", (c*1.8)+32);

            break;
        default:
            printf("Enter correct input value!!");
            break;
    }

    return 0;
}