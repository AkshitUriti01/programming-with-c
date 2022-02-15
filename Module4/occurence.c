#include <stdio.h>

int main() {
    int nums[] = {10, 20, 10, 14, 10};
    int num = 10;

    int arraySize = sizeof(nums);
    int intSize = sizeof(nums[0]);
    int length = arraySize/intSize;
    int n=0;
    for (int i=0; i<length; i++) {
        if (nums[i] == num) {
            n++;
        }
    }

    printf("%d", n);

    return 0;
}