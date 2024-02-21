#include <stdio.h>

int main() {
double a, b, result;
int choice, caseChoice;

printf("Enter two real numbers a and b: ");
scanf("%lf %lf", &a, &b);

printf("Choose an operation:\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
scanf("%d", &choice);

switch (choice) {
case 1:
result = a + b;
printf("Result: %lf\n", result);
break;
case 2:
result = a - b;
printf("Result: %lf\n", result);
break;
case 3:
result = a * b;
printf("Result: %lf\n", result);
break;
case 4:
if (b != 0) {
printf("Choose a case:\n");
printf("1. Quotient\n");
printf("2. Remainder\n");
scanf("%d", &caseChoice);
if (caseChoice == 1) {
result = a / b;
printf("Quotient: %lf\n", result);
} 
else if (caseChoice == 2) {
result = fmod(a, b);
printf("Remainder: %lf\n", result);
} 
else {
printf("Invalid case choice.\n");
}
} 
else {
printf("Error: Divisor is zero.\n");
}
break;
default:
printf("Invalid choice.\n");
}

return 0;
}
