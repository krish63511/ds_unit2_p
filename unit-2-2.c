#include <stdio.h>

void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Shellsort(int A[], int n) {
    int gap, i, j, temp;

    for (gap = n / 2; gap >= 1; gap /= 2) {
        for (j = gap; j < n; j++) {
            for (i = j - gap; i >= 0 && A[i + gap] < A[i]; i -= gap) {
                temp = A[i];
                A[i] = A[i + gap];
                A[i + gap] = temp;
            }
        }
    }
}

int main() {
    int A[] = {23,21,45,3,1,5,54};
    int n = sizeof(A) / sizeof(A[0]);
    
    printf("Original array: ");
    printArray(A, n);
    Shellsort(A, n);
    
    printf("Sorted array: ");
    printArray(A, n);
    
    return 0;
}
