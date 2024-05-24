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

    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( i%2 == 1 || j % 2 == 1)
            {
                totalSum += matrix[i][j];
            }
        }
    }

    printf("Sum: %d\n", totalSum);

    return 0;
}



