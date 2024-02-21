#include <stdio.h>

int main() {
int number;

printf("Enter a number: ");
scanf("%d", &number);

if (number > 0) {
if ((number & (number - 1)) == 0) {
printf("The number is a positive power of 2.\n");
} else {
printf("The number is positive but not a power of 2.\n");
}
} else if (number == 0) {
printf("Zero is not a valid input.\n");
} else {
printf("Negative input is not valid.\n");
}

return 0;
}
