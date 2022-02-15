// bubblesort

#include <stdio.h>
int main(void) {
    int nums[] = {100, 20, 56, 8, 19, 34};
    int n=6;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1; j++) {
            if (nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    for (int i=0; i<n; i++) {
        printf("%d ", nums[i]);
    }

}