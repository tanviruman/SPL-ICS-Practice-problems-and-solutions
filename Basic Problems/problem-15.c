#include <stdio.h>

int main() {
    float floatValue;

    // Prompt the user for input
    printf("Please enter a floating-point number: ");

    // Read the floating-point number from the user
    scanf("%f", &floatValue);

    // (a) Print the number right-justified within 10 columns
    printf("(a) Right-justified within 10 columns: %10.6f\n", floatValue);

    // (b) Print the number right-justified to 2 columns
    printf("(b) Right-justified to 2 columns: %2.6f\n", floatValue);

    // (c) Print the number rounded to two decimal places
    printf("(c) Rounded to two decimal places: %.2f\n", floatValue);

    // (d) Print the number rounded to an integer (without conversion or type casting)
    printf("(d) Rounded to integer: %.0f\n", floatValue);

    // (e) Print the number in exponential notation (scientific notation)
    printf("(e) Exponential notation: %e\n", floatValue);

    return 0;
}
