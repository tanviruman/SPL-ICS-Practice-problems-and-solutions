#include <stdio.h>

int main() {
    int i,j;
    int array[3][3];

    printf("Enter the elements of array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Matrix view:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
