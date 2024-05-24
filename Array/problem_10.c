#include <stdio.h>

int main() {
    int n, i, searchKey, found = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter the integers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &searchKey);

    for (i = 0; i < n; i++) {
        if (array[i] == searchKey) {
            found = 1;
            break;  // Break the loop if the key is found
        }
    }

    if (found == 1) {
        printf("FOUND\n");
    } else {
        printf("NOT FOUND\n");
    }

    return 0;
}

