// calculate house rent for 180 days, per day rent is 1000

#include <stdio.h>

struct House {
    char name[50];
    char address[100];
    int rent;
    int days;
};

int main() {
    struct House h1 = {"House 1", "Kathmandu", 1000};
    printf("Enter the no.of days: ");
    scanf("%d", &h1.days);
    printf("House rent for %d days in %s is: %d\n", h1.days, h1.address, h1.rent * h1.days);

    struct House h2 = {"House 2", "Hyderabad", 2000};
    printf("Enter the no.of days: ");
    scanf("%d", &h2.days);
    printf("House rent for %d days in %s is: %d\n", h2.days, h2.address, h2.rent * h2.days);


    return 0;
}