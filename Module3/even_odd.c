#include <stdio.h>

void even_odd(int range) {
    printf("Even numbers: ");
    printf("\tOdd numbers:\n");
    
    for (int i=1; i<=range; i++) {
        if (i%2 == 0) {
            printf("%d\n", i);
        } else if(i%2 == 1) {
            printf("\t%d", i);
        }
    }
}   

int main(void) {
    even_odd(10);
}