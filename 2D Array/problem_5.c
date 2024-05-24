#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the identity matrix: ");
    scanf("%d", &size);

    printf("Identity matrix \n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
