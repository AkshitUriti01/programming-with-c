#include <stdio.h>

struct car {
    char name[50];
    char company[100];
    char version[10]; // petrol or diesel
    
}c1,c2;

int main()
{
    // struct car c1,c2;

    printf("1.Enter company, name and version: ");
    scanf("%s %s %s", c1.company, c1.name, c1.version);

    printf("2.Enter company, name and version: ");
    scanf("%s %s %s", c2.company, c2.name, c2.version);
    
    printf("First car is:\n %s %s %s",  c1.company, c1.name, c1.version);
    printf("\nSecond car is:\n %s %s %s\n",  c2.company, c2.name, c2.version);

    return 0;
}
