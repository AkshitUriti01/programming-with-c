// printing n odd numbers

#include <stdio.h>
int main() {
    int max;
    printf("Enter upto number you want to print even numbers: ");
    scanf("%d", &max);

    for (int i=1; i<=max; i++) {
        if (i%2==1) {
            printf("%d ", i);
        }
    }

    return 0;
}