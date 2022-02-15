#include <stdio.h>

struct student {
    int age;
    int score;
};

int main() {
    struct student s1;

    s1.age = 17;
    s1.score = 90;
    
    printf("%d\n", s1.age);
    printf("%d\n", s1.score);

    return 0;
}