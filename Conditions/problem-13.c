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
printf("4. Division (quotient and remainder)\n");
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
printf("Choose a case:\n");
printf("1. Quotient\n");
printf("2. Remainder\n");
scanf("%d", &caseChoice);
if (b != 0) {
if (caseChoice == 1) {
result = a / b;
} 
else if (caseChoice == 2) {
result = fmod(a, b);
}
 else {
printf("Invalid case choice.\n");
return 1;
}
} 
else {
printf("Error: Division by zero.\n");
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
