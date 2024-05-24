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
    int sumMidColumn = 0;
    int sumMidRow = 0;
    int sumFirstColumn = 0;
    int sumLastColumn = 0;
    int totalSum = 0;
    int midElement = matrix[n/2][n/2];

    for (int i = 0; i < n/2; i++) {
        sumFirstRow += matrix[0][i];
    }
    for (int i = n/2 + 1; i < n; i++) {
        sumLastRow += matrix[n - 1][i];
    }
    for (int i = 0; i < n; i++) {
        sumMidColumn += matrix[i][n/2];
    }
    for (int i = 0; i < n; i++) {
        sumMidRow += matrix[n/2][i];
    }
    for (int i = 0; i < n/2; i++) {
        sumLastColumn += matrix[i][n - 1];
    }
    for (int i = n/2 + 1; i < n; i++) {
        sumFirstColumn += matrix[i][0];
    }

    totalSum = sumFirstRow + sumLastRow + sumFirstColumn + sumLastColumn + sumMidColumn + sumMidRow - midElement;

    printf("Sum: %d\n", totalSum);

    return 0;
}


