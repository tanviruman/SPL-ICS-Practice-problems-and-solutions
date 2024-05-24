#include <stdio.h>

int main() {
    int n, m, i, j;

    // Input size and elements for array A
    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d elements for array A:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Input size and elements for array B
    printf("Enter the size of array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d positive elements for array B:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Creating a temporary array C with size equal to the sum of sizes of A and B
    int C[n + m];

    // Copying elements of A to C
    for (i = 0; i < n; i++) {
        C[i] = A[i];
    }

    // Copying elements of B to C, excluding duplicates from A
    int unionSize = n; // Size of the union array
    for (i = 0; i < m; i++) {
        int found = 0; // Flag to check if the element is already present in A

        // Checking if the element is already present in A
        for (j = 0; j < n; j++) {
            if (B[i] == A[j]) {
                found = 1;
                break;
            }
        }

        // If the element is not found in A, add it to C
        if (!found) {
            C[unionSize] = B[i];
            unionSize++;
        }
    }

    // Display the union of arrays A and B
    printf("Union of array A and array B:\n");
    for (i = 0; i < unionSize; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}

