#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
        printf("Invalid dimensions. Please enter positive values for m and n.\n");
        return 1;
    }

    int matrix[m][n];

    printf("Enter the elements of the matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int current = matrix[i][j];
            for (int k = i; k < m; k++) {
                for (int l = (k == i) ? j + 1 : 0; l < n; l++) {
                    if (matrix[k][l] == current) {
                        matrix[k][l] = -1;
                    }
                }
            }
        }
    }

    printf("Matrix with Duplicates Replaced:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

