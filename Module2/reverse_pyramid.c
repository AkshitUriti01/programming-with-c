// reverse pyramid
#include <stdio.h>
int main() {

    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i=0; i<=rows; i++) {
        for (int j=rows; j>=i; j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}