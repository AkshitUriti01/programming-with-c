// a better version 
#include <stdio.h>

struct Car
{
    char name[50];
    char company[100];
    char version[10]; // petrol or diesel
};

int main() {

    struct Car cars[10];

    printf("1.Enter company, name and version: ");
    scanf("%s %s %s", cars[0].company, cars[0].name, cars[0].version);

    printf("2.Enter company, name and version: ");
    scanf("%s %s %s", cars[1].company, cars[1].name, cars[1].version);
    
    printf("First car is:\n %s %s %s",  cars[0].company, cars[0].name, cars[0].version);
    printf("\nSecond car is:\n %s %s %s\n",  cars[1].company, cars[1].name, cars[1].version);

    return 0;
}
