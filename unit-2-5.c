#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;  
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  
}

int main() {
    int arr[] = {40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 50;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
