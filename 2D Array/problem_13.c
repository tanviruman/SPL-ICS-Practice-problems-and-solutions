#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n][n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int symmetric = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (array[i][j] != array[j][i]) {
                symmetric = 0;  // Set symmetric to false if any element is different
                break;
            }
        }
        if (symmetric==0) {
            break;
        }
    }

    if (symmetric) {
        printf("Yes, the matrix is symmetric.\n");
    } else {
        printf("No, the matrix is not symmetric.\n");
    }

    return 0;
}
