#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the size of the 2D array: ");
    scanf("%d", &n);

    int array[n][n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Major diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][i]);
    }

    printf("\nMinor diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][n - 1 - i]);
    }

    return 0;
}

