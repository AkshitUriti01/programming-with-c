#include <stdio.h>
int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3];

    for (int i=0; i<9; i++) {
        b[i/3][i%3] = a[i%3][i/3];
    }

    // printing the elements of the transposed matrix
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}