#include <stdio.h>

int minimum(int arr[]);

int main(void) {
    int nums[] = {10, 20, 34, 45, 67, 89, 90, 95};
    int ans = minimum(nums);
    printf("The least number is %d", nums[ans]);
}

// finding the index of least number
int minimum (int arr[]) {
    int arraySize = sizeof(arr);
    int intSize = sizeof(arr[0]);
    int length = arraySize / intSize;
    int min=0;

    for (int i=0; i<length; i++) {
        if (arr[i] < arr[i+1]) {
            min = i;
        }
    }

    return min;
}
