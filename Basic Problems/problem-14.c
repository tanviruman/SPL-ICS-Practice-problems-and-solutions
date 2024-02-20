#include <stdio.h>

int globalVariable = 10; // Define a global variable

int main() {
    printf("A. Value of globalVariable before defining the local variable: %d\n", globalVariable);

    int globalVariable = 20; // Define a local variable with the same name

    printf("B. Value of globalVariable after defining the local variable: %d\n", globalVariable);

    {
        extern int globalVariable;
        printf("C. Value of globalVariable as global: %d\n", globalVariable);
    }

    return 0;
}
