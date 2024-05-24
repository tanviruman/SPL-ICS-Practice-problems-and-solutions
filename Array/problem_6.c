#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int firstArray[n];
    int secondArray[n];
    int sumArray[n];

    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &firstArray[i]);
    }

    printf("Enter %d elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &secondArray[i]);
    }

    for (int i = 0; i < n; i++) {
        sumArray[i] = firstArray[i] + secondArray[i];
    }

    printf("Sum of corresponding numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sumArray[i]);
    }

    return 0;
}

