#include <stdio.h>

int main() {
    int n, m;

    // Input the size of arrays A and B
    printf("Enter the size of array A: ");
    scanf("%d", &n);
    printf("Enter the size of array B: ");
    scanf("%d", &m);

    // Check if the sizes are compatible for swapping
    if (n != m) {
        printf("Array sizes are not compatible for swapping.\n");
        return 1;
    }

    // Declare arrays A and B with the same size
    int A[n], B[n];

    // Input elements for array A
    printf("Enter %d integers for array A:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Input elements for array B
    printf("Enter %d integers for array B:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Swap elements between arrays A and B
    for (int i = 0; i < n; i++) {
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    // Display elements of both arrays
    printf("Array A after swapping:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array B after swapping:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

