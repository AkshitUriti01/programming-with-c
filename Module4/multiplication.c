// multiplication of two matrices
#include <stdio.h>
int main() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;
    
    // storing the elements of the first matrix
    printf("Enter the elements of first matrix\n");
    for (i=0; i<9; i++) {
        scanf("%d", &a[i/3][i%3]);
    }

    // storing the elements of the second matrix
    printf("Enter the elements of second matrix\n");
    for (i=0; i<9; i++) {
        scanf("%d", &b[i/3][i%3]);
    }

    // performing the multiplication
    for (j=0; j<9; j++) {
        c[j/3][j%3] = a[j/3][j%3] * b[j/3][j%3];
    }

    // priting the elements of the multiplied matrix
    printf("The multiplied matrix is:\n");
    for (k=0; k<9; k++) {
        printf("%d ", c[k/3][k%3]);
        if (k%3 == 2) {
            printf("\n");
        }
    }

    return 0;
}