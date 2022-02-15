#include <stdio.h>
int main(void) {
    int nums[] = {10, 20, 56, 8, 19, 34};
    int n=6; // length of the array

    int min=nums[0];
    for (int i=0; i<n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    printf("The minimum number is %d", min);
}