#include <stdio.h>

int main() {
    long int longIntVariable = 1234567890L;         // A long int variable
    long long int longLongIntVariable = 1234567890123456789LL; // A long long int variable
    long double longDoubleVariable = 3.141592653589793238L;  // A long double variable
    short int shortIntVariable = 32767;              // A short int variable

    // Printing the values
    printf("The Long Int Value: %ld\n", longIntVariable);
    printf("The Long Long Int Value: %lld\n", longLongIntVariable);
    printf("The Long Double Value: %Lf\n", longDoubleVariable);
    printf("The Short Int Value: %d\n", shortIntVariable);

    return 0;
}
