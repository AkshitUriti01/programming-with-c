// selection sort
#include <stdio.h>

void selectionSort(int array[], int size) {
    int length = sizeof(array) / sizeof(array[0]);
    int min=array[0];
    for (int i=0; i<size; i++) {
        if (array[i] < min) {
            min = array[i];
        }

        int temp=array[0];
        array[0] = min;
        array[size-1] = temp;
    }
}

int main(void) {

}