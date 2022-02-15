// Finding maximum element in an array
#include <stdio.h>

int main(void) {
    int nums[] = {10, 20, 34, 45, 67, 89, 90, 95, 89};

    int arraySize = sizeof(nums);
    int intSize = sizeof(nums[0]);
    int length = arraySize / intSize;
    int max=0;

    for (int i=0; i<length; i++) {
        if (nums[i] < nums[i+1]) {
            max = i+1;
        }
    }

    printf("The largest number is %d", nums[max]);
}