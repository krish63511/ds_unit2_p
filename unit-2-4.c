#include <stdio.h>

int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1; 
}

int main() {
    int arr[] = {60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 70;

    int result = sequentialSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}