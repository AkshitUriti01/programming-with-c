#include <stdio.h>

union test1 {
    int x,y;
};

int main(void) {
    union test1 t;
    t.x = 2;
    printf("After making x=2:\n x = %d, y = %d", t.x, t.y);

    t.y = 20;
    printf("\nAfter making y=20:\n x = %d, y = %d", t.x, t.y);
}