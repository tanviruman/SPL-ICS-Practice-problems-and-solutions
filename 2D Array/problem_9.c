#include <stdio.h>

int main() {
    int n;
    printf("Enter the dimension of the square matrix (must be odd): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number for the dimension.\n");
        return 1;
    }

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumFirstRow = 0;
    int sumLastRow = 0;
    int sumMainDiagonal = 0;
    int sumAntiDiagonal = 0;
    int totalSum = 0;
    int midElement = matrix[n/2][n/2];

    for (int i = 0; i < n; i++) {
        sumFirstRow += matrix[0][i];
        sumLastRow += matrix[n - 1][i];
        if (i != 0 && i != n-1)
        {
            sumMainDiagonal += matrix[i][i];
            sumAntiDiagonal += matrix[i][n - 1 - i];
        }
    }

    totalSum = sumFirstRow + sumLastRow + sumMainDiagonal + sumAntiDiagonal - midElement;

    printf("Sum: %d\n", totalSum);

    return 0;
}

