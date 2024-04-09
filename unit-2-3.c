#include <stdio.h>

int indexSearch(int arr[], int n, int key) {
    int i, index = -1;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }
    return index;
}

int main() {
    int arr[] = {50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 80;

    int result = indexSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
    
}