// defining the strucutre of the human
#include <stdio.h>
#include <string.h>

struct human{
    char name[20];
    char gender[6];    // M or F
    int age;
    float height, weight;
}h1, h2;

int main(void) {

    // taking input from the user
    gets(h1.name);
    printf("Enter your gender: ");
    gets(h1.gender);
    printf("Enter your age(year), height(cm), weight(kg): ");
    scanf("%d %f %f", &h1.age, &h1.height, &h1.weight);

    printf("Human1:\n \tName:%s\n \tGender:%s\n \tAge:%d\n \tHeight:%.f cm\n \tWeight:%.f kg\n", h1.name, h1.gender, h1.age, h1.height, h1.weight);

}