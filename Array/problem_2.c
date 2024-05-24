#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Declare an array of size n
    int array[n];

    // Input the integers into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i]; // Add the current integer to the sum
    }

    // Display the sum
    printf("Sum of the integers: %d\n", sum);

    return 0;
}

