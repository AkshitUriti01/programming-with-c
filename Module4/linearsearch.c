// linearsearch algorithm
#include <stdio.h>

int linearsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            return i;
    
    // if element is not found
    return -1;
}

int main() {
    int nums[] = {10, 20, 30, 40, 50, 0, -10, -15};
    int target = -10;
    int size = 8;
    int idx = linearsearch(nums, size, target);
    if (idx == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", idx);

    return 0;
}