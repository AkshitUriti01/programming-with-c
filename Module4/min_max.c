#include <stdio.h>

// return minimum elemtn of array
int minimum(int arr[], int n) {
    int min_idx = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < arr[min_idx])
            min_idx = i;
    return arr[min_idx];
}

// returns the maximum element of array
int maximum(int arr[], int n) {
    int max_idx = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > arr[max_idx])
            max_idx = i;
    return arr[max_idx];
}


// main function 
int main() {
    int nums[] = {10, 20, 30, 40, 50, 0, -10, -15};
    printf("The minimum element is %d\n", minimum(nums, 8));
    printf("The maximum element is %d\n", maximum(nums, 8));

    return 0;
}