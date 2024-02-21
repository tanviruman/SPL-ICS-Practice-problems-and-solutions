#include <stdio.h>
int main() {
double a, b, result;
int choice;

printf("Enter two real numbers a and b: ");
scanf("%lf %lf", &a, &b);

printf("Choose an operation:\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division (quotient)\n");
scanf("%d", &choice);

switch (choice) {
case 1:
result = a + b;
break;
case 2:
result = a - b;
break;
case 3:
result = a * b;
break;
case 4:
if (b != 0) {
result = a / b;
} else {
printf("Division by zero is invalid.\n");
return 1;
}
break;
default:
printf("Invalid choice.\n");
return 1;
}

printf("Result: %lf\n", result);

return 0;
}
