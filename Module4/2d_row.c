// Given a two-dimensional array of integers and a row index, return the largest element in that row.
#include <stdio.h>
int main(void) {

    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int arr[row][col];

    printf("Enter elements: ");
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("%d\n", max);
    return 0;
}

