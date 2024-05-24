#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the dimensions of the array: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], sum[m][n];

    printf("Enter the elements of Array A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of Array B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Elements of Matrix C (A + B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
