#include <stdio.h>

int main() {
    int n, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array with the given size
    int A[n];

    // Input elements for the array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Replace elements that are divisible by 3 with -1
    for (i = 0; i < n; i++) {
        if (A[i] % 3 == 0) {
            A[i] = -1;
        }
    }

    // Display the array after replacement
    printf("Array A after replacing: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

